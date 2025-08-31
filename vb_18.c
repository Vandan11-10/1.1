#include <stdio.h>
#include <stdlib.h>

int main()
{
   float length,breadth;
   float area,perimeter;

   printf("Enter the Length: ");
   scanf("%f", &length);

   printf("Enter the Breadth: ");
   scanf("%f", &breadth);

   area = length * breadth;
   perimeter = (length + breadth) * 2;

   printf("The Area of Rectangle is: %.2f\n", area);
   printf("The Perimeter of Rectangle is: %.2f\n", perimeter);

   return 0;
}
