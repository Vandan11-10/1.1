#include <stdio.h>
#include <stdlib.h>

int main()
{
   float netSales,grossSales;
   float discount;

   printf("Enter Gross Sales: ");
   scanf("%f", &grossSales);

   discount = grossSales * 0.1;
   netSales = grossSales - discount;

   printf("Your Net Sales: %.2f\n", netSales);

   return 0;
}
