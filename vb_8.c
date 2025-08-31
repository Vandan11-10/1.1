#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dollar,Rs;

   printf("Enter how many Dollars you want to convert: ");
   scanf("%d", &dollar);

   Rs = dollar * 48;

   printf("%d Dollar: %d Rupees\n", dollar,Rs);
   return 0;
}
