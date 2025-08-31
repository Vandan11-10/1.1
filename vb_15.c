#include <stdio.h>
#include <stdlib.h>

int main()
{
   float celsius,fahrenheit;

   printf("Enter the Temperature in Fahrenheit: ");
   scanf("%f", &fahrenheit);

   celsius = (fahrenheit - 32) * 0.55;

   printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit,celsius);

   return 0;
}
