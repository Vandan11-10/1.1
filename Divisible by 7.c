#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   printf("Enter num: ");
   scanf("%d", &num);

   if (num % 7 == 0)
   printf("%d is Divisible by 7\n", num);

   else
       printf("%d is Not Divisible by 7\n", num);

   return 0;
}
