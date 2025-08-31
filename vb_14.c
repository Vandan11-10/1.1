#include <stdio.h>
#include <stdlib.h>

int main()
{
   float celsius,fahrenheit;

   printf("Enter the Temperature in Celsius: ");
   scanf("%f", &celsius);

   fahrenheit = (1.8 * celsius) + 32;

   printf("%.2f Celsius = %.2f Fahrenheit\n", celsius,fahrenheit);

   return 0;
}
