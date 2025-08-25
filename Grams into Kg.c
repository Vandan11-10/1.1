#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grams,kg;

   printf("Enter No. of Grams: ");
   scanf("%d", &grams);

   kg = grams / 1000;

   printf("%d Grams = %d kg\n", grams,kg);

   return 0;
}
