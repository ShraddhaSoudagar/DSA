#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int total(int n);

int main() {
    int n,score;
    scanf("%d",&n);
    if(n>0)
    {
    score=total(n);
        printf("\n Final score=%d points",score);

    }
    else
        printf("Number of problems should be positive");


    return 0;
}

int total(int n)
{
    int time,score=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&time);
        if(time>=1 && time<=2)
            score=score+100;
        else if(time>=3 && time<=5)
            score=score+80;
        else if(time>=6 && time<=10)
            score=score+50;
        else if(time>=11 && time<=20)
            score=score+25;
        else if(time>20)
            score=score+0;

    }

    return score;
}

