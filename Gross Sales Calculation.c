#include <stdio.h>
#include <stdlib.h>

int main()
{
   float netSales,grossSales;
   float discount;

   printf("Enter Gross Sales: ");
   scanf("%f", &grossSales);

   if (grossSales>20000)
   {
       discount = grossSales * 0.15;
   }

   else if (grossSales>10000)
   {
       discount = grossSales * 0.1;
   }

   else discount = grossSales * 0.05;

   netSales = grossSales - discount;

   printf("Your Net Sales = %f\n", netSales);

   return 0;
}
