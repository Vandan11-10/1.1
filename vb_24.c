#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before Swapping: a = %d, b = %d\n", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d\n", a,b);

    return 0;
}
