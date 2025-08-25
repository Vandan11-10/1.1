#include <stdio.h>
#include <stdlib.h>

int main()
{
    float netSalary,grossSalary;
    float allowance,deduction;

    printf("Enter Gross Salary: ");
    scanf("%f", &GrossSalary);

    allowance = grossSalary * 0.1;
   deduction = grossSalary * 0.03;

   netSalary = grossSalary + allowance - deduction;

        
       printf("Your Net Salary is: %f\n", NetSalary);
       return 0;
}
