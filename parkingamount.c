include <stdio.h>

double parkingAmount(int days){
    
    double parkingCharge;

    printf("How much money was spent on parking per day?");
    scanf("%lf", &parkingCharge);

    while (parkingFee < 0){
        printf("Invalid Input. Enter a non-negative amount:");
        scanf("%lf", &parkingFee);
    }

    return parkingCharge * days;
}