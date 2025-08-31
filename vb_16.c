#include <stdio.h>
#include <stdlib.h>

int main()
{
    int principle, rate, months;
    float interest;

    printf("Enter Principle Amount: ");
    scanf("%d", &principle);

    printf("Enter Rate of Interest: ");
    scanf("%d", &rate);

    printf("Enter No.of Months: ");
    scanf("%d", &months);

    interest = (principle * rate * months)/100;

    printf("The Interest is: %.2f\n", interest);

    return 0;
}
