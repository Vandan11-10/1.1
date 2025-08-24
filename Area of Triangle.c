#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,length;
    float area;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter length: ");
    scanf("%d", &length);

    area = (height * length)/2.0;

    printf("The Area of Triangle is: %f\n", area);

    return 0;
}
