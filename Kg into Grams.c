#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grams,kg;

   printf("Enter No. of KiloGrams: ");
   scanf("%d", &kg);

   grams = kg * 1000;

   printf("%d Kilo Grams = %d Grams\n", kg,grams);

   return 0;
}
