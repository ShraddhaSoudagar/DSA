#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a candidate
typedef struct Candidate {
    char name[50];
    char degree[20];
    int gateScore;
    int age;
    struct Candidate* next;
    struct Candidate* prev;
} Candidate;

// Function to create a new candidate node
Candidate* createCandidate(const char* name, const char* degree, int gateScore, int age) {
    Candidate* newCandidate = (Candidate*)malloc(sizeof(Candidate));
    strcpy(newCandidate->name, name);
    strcpy(newCandidate->degree, degree);
    newCandidate->gateScore = gateScore;
    newCandidate->age = age;
    newCandidate->next = NULL;
    newCandidate->prev = NULL;
    return newCandidate;
}

// Function to insert a candidate at the end of the list
void insertCandidate(Candidate** head, Candidate** tail, Candidate* newCandidate) {
    if (*head == NULL) {
        *head = newCandidate;
        *tail = newCandidate;
        newCandidate->next = newCandidate;
        newCandidate->prev = newCandidate;
    } else {
        newCandidate->next = *head;
        newCandidate->prev = *tail;
        (*tail)->next = newCandidate;
        (*head)->prev = newCandidate;
        *tail = newCandidate;
    }
}

// Function to check if a candidate is eligible for the first round
bool isEligibleFirstRound(const Candidate* candidate) {
    // Check degree, gate score, year, and age criteria
    if (strcmp(candidate->degree, "BE") == 0 || strcmp(candidate->degree, "BTECH") == 0) {
        if (candidate->gateScore > 80 && (candidate->gateScore == 2022 || candidate->gateScore == 2023)) {
            if (candidate->age <= 28) {
                return true;
            }
        }
    }
    return false;
}

// Function to check if a candidate is eligible for the second round
bool isEligibleSecondRound(const Candidate* candidate) {
    // Check gate score criteria
    if (candidate->gateScore > 94) {
        return true;
    }
    return false;
}

// Function to display the list of eligible candidates
void displayEligibleCandidates(const Candidate* head) {
    if (head == NULL) {
        printf("No eligible candidates found.\n");
        return;
    }

    const Candidate* current = head;
    printf("Eligible Candidates:\n");
    do {
        printf("Name: %s\n", current->name);
        printf("Degree: %s\n", current->degree);
        printf("Gate Score: %d\n", current->gateScore);
        printf("Age: %d\n", current->age);
        printf("------------------------\n");
        current = current->next;
    } while (current != head);
}

int main() {
    Candidate* head = NULL;
    Candidate* tail = NULL;

    // Add sample candidates to the list
    insertCandidate(&head, &tail, createCandidate("John", "BE", 2023, 25));
    insertCandidate(&head, &tail, createCandidate("Alice", "BTECH", 2022, 27));
    insertCandidate(&head, &tail, createCandidate("Bob", "BSC", 2023, 30));
    insertCandidate(&head, &tail, createCandidate("Sarah", "BE", 2022, 26));
    insertCandidate(&head, &tail, createCandidate("Michael", "BTECH", 2022, 29));

    Candidate* current = head;
    Candidate* next;
    while (current != NULL) {
        next = current->next;
        if (!isEligibleFirstRound(current)) {
            if (current == head) {
                head = next;
            }
            if (current == tail) {
                tail = current->prev;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            free(current);
        }
        current = next;
    }

    displayEligibleCandidates(head);

    current = head;
    while (current != NULL) {
        next = current->next;
        if (!isEligibleSecondRound(current)) {
            if (current == head) {
                head = next;
            }
            if (current == tail) {
                tail = current->prev;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            free(current);
        }
        current = next;
    }

    displayEligibleCandidates(head);

    return 0;
}
