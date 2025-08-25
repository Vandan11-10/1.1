#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hours,minutes;

   printf("Enter No. of Hours: ");
   scanf("%d", &hours);

   minutes = hours * 60;

   printf("%d Hours = %d Minutes\n", hours,minutes);

   return 0;
}
