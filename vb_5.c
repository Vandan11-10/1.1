#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a,b;
    float result;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    result = a + b;
    printf("The Sum Between a and b is: %.2f\n", result);

    result = a - b;
    printf("The Difference Between a and b is: %.2f\n", result);

    result = a * b;
    printf("The Product Between a and b is: %.2f\n", result);

    result = a / b;
    printf("The Division Between a and b is: %.2f\n", result);

   return 0;
}
