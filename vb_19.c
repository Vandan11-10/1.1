#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R;
    float area;

    printf("Enter radius: ");
    scanf("%d", &R);

    area = R * R * 3.14;

    printf("The Area of Circle is; %.2f\n", area);

    return 0;
}
