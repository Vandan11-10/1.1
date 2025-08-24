#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    float area,perimeter;

    printf("Enter length: ");
    scanf("%d", &length);

    area = length * length;
    perimeter = 4 * length;

    printf("The Area of Square is: %f\n", area);
    printf("The Perimeter of Square is: %f\n", perimeter);
    return 0;
}
