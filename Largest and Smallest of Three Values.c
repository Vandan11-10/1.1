#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    if (a>b && a>c)
    {
        printf("Largest Number: %f\n", a);
    }

    else if (b>a && b>c)
    {
        printf("Largest Number: %f\n", b);
    }

    else
    {
        printf("Largest Number: %f\n", c);
    }

    if (a<b && a<c)
    {
        printf("Smallest Number: %f\n", a);
    }

    else if (b<a && b<c)
    {
        printf("Smallest Number: %f\n", b);
    }

    else
    {
        printf("Smallest Number: %f\n", c);
    }

    return 0;
}
