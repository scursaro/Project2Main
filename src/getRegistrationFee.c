#include <stdio.h>

//function for getting the conference or seminar registration fees
double getRegistrationFee ()
{
    double amount;
    printf("How much was spent on conference or seminar registration fees? ");//ask user for amount spent
    scanf("%lf", &amount);
    while(amount < 0)//if the amount is less than 0 ask again
    {
        printf("Value cannot be negative, enter the right amount for registration fees: ");
        scanf("%lf", &amount);
    }

    return amount;//returns the total amount spent in registration fees

}



