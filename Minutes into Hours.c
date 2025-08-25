#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hours,minutes;

   printf("Enter No. of Minutes: ");
   scanf("%d", &minutes);

   hours = minutes / 60;

   printf("%d Minutes = %d Hours\n", minutes,hours);

   return 0;
}
