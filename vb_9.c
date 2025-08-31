#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dollar,Rs;

   printf("Enter how many Rupees you want to convert: ");
   scanf("%d", &Rs);

   dollar = Rs / 48;

   printf("%d Rupees: %d Dollar\n", Rs,dollar);
   return 0;
}
