#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    int sqrt_num = sqrt(num);
    for (int i = 2; i <= sqrt_num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to find the next prime number
int next_prime(int num) {
     while (!is_prime(++num));
    return num;
}

// Function to replace upper triangular elements with next prime
void replace_upper_triangular(int mat[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (mat[i][j] != 0) {
                mat[i][j] = next_prime(mat[i][j]);
            }
        }
    }
}

// Function to print the matrix
void print_matrix(int mat[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int mat[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
 }
    replace_upper_triangular(mat, size);
    printf("The updated matrix is:\n");
    print_matrix(mat,size);
//    return 0;
}
