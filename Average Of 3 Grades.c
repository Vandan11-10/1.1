#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1,grade2,grade3,total;
    float average;

    printf("Enter grade1: ");
    scanf("%d", &grade1);

    printf("Enter grade2: ");
    scanf("%d", &grade2);

    printf("Enter grade3: ");
    scanf("%d", &grade3);


    total = grade1+grade2+grade3;

    average = total / 3.0;

    printf("The Total of 3 grades is: %d\n", total);

    printf("The Average of 3 grades is: %f\n", average);

    return 0;
}
