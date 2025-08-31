#include <stdio.h>
#include <stdlib.h>

int main()
{
   float dollar,pound,Rs;

   printf("Enter how many Dollars you want to convert: ");
   scanf("%f", &dollar);

   Rs = dollar * 48;
   pound = Rs / 70;

   printf("%.2f Dollar =  %.2f Pounds\n", dollar,pound);
   return 0;
}
