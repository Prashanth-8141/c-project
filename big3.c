#include <stdio.h>
void biggest3()
{
    int A, B, C;

    printf("Enter the numbers A, B and C; ");
    scanf("%d %d %d", &A, &B, &C);

    // finding max using compond expressions
    if (A >= B && A >= C)
        printf("%d is the  Largest number.", A);

    else if (B >= A && B >= C)
         printf("%d is the Largest number.", B);

    else
       printf("%d is the largest number.", C);

   // return 0;
}

