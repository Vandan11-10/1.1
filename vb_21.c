#include <stdio.h>
#include <stdlib.h>

int main()
{
   float netSalary,grossSalary;
   float allowance,deduction;

   printf("Enter Gross Salary: ");
   scanf("%f", &grossSalary);

   allowance = grossSalary * 0.1;
   deduction = grossSalary * 0.03;

   netSalary = grossSalary + allowance - deduction;

   printf("Your Net Salary is: %.2f\n", netSalary);


   return 0;
}
