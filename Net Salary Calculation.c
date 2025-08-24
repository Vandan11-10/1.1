#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NetSalary,GrossSalary;
    float allowances,deductions;

    printf("Enter Gross Salary: ");
    scanf("%f", &GrossSalary);

    printf("Enter Allowances: ");
    scanf("%f", &allowances);

    printf("Enter Deductions: ");
    scanf("%f", &deductions);

    if (GrossSalary>10000)
    {
        allowances = allowances / 10;
        deductions = deductions / 3;

        NetSalary = GrossSalary + allowances - deductions;
    }

     else if (GrossSalary>5000)
     {
        allowances = allowances / 7;
        deductions = deductions / 2;

        NetSalary = GrossSalary + allowances - deductions;
     }

      else
      {
        NetSalary = GrossSalary + allowances - deductions;
     }

       printf("Your Net Salary is: %f\n", NetSalary);
       return 0;
}
