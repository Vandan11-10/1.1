#include <stdio.h>
#include <stdlib.h>

int main()
{
   float netSalary,grossSalary;
   float allowance,deduction;

   printf("Enter Gross Salary: ");
   scanf("%f", &grossSalary);

   if (grossSalary>10000)
   {
       allowance = grossSalary * 0.1;
       deduction = grossSalary * 0.03;
   }

    else if (grossSalary>5000)
   {
       allowance = grossSalary * 0.07;
       deduction = grossSalary * 0.02;
   }

   netSalary = grossSalary + allowance - deduction;

   printf("Your Net Salary is: %f\n",netSalary);

   return 0;
}
