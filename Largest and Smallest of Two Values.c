#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    if (a>b)
    {
        printf("Larger number: %f\n", a);
        printf("Smaller number: %f\n", b);
    }

    else
    {
        printf("Larger number: %f\n", b);
        printf("Smaller number: %f\n", a);
    }

    return 0;
}
