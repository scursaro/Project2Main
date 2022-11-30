include <stdio.h>

double parkingAmount(int days){
    
    //create variable to return.
    double parkingCharge;

    //ask the user for the amount of money spent on parking per day.
    printf("How much money was spent on parking per day?\n");
    //get the input for the user.
    scanf("%lf", &parkingCharge);

    //loop that ensures the user has a vaid input for days.
    while (parkingFee < 0){
        printf("Invalid Input. Enter a non-negative amount:\n");
        scanf("%lf", &parkingFee);
    }

    //return the amount of money spent per day times the amount of days spent.
    return parkingCharge * days;
}