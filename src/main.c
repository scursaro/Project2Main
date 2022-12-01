//This will be the main method in our project 2
//also need to include the basics, and include the other files
#include <stdlib.h>
#include <stdio.h>

#include "days.c"
#include "MealAmount.c"
#include "arrivaldeparture.c"
#include "getAirfareAmount.c"
#include "getCarRentalAmount.c"
#include "getHotelAmount.c"
#include "getPrivateVehicleExpense.c" 
#include "getRegistrationFee.c"
#include "getTaxiAmount.c"
#include "parkingamount.c"

int main()
{
    //we will need a lot of input from the user
    //a lot of varaibles need to be created as well

    int days;
    double arrivalTime;
    double departureTime;
    double airfareFee;
    double carRentalFee;
    double privateCarFee;
    double vehicleExpense;
    double privateCarMilage = .38;
    double parkingFee;
    double taxiFee;
    double registrationFee;
    double spentTotal;//Overall total cost
    double allowedTotal;
    double companyTotal;
    double mealTotal;
    double total;
    double allowedParking;
    double allowedTaxiFee;
    double hotelFee;
    double nightlyRate;
    double allowedHotelFee;
    double hotelFeeTotal;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double breaksfastFee;
    double lunchFee;
    double dinnerFee;
    double allowedMealTotal;
    char employeename[15]; //15 since I do not think a name of 15 characters exists
    int d;
    double parkingSpent;
    double taxiSpent;
    double spentMealTotal;

    printf("Emplyee Expense Report\n");
    printf("_______________________\n");

    printf("Employee Name: ");
    scanf("%s", employeename);
    printf("\n" ,employeename);

    days = numberOfDays(); //this will call the function to get the days


    departureTime = getDeparture();
    arrivalTime = getArrival();

    printf("Travel  \n");
    printf("---------");
    airfareFee = getAirfareAmount(); //calls the function
    carRentalFee = getCarRentalAmount(); //function call
    vehicleExpense = getPrivateVehicleExpense();

    allowedParking = 6 * days;
    parkingFee = parkingAmount(days);
    allowedTaxiFee = 10 * days;
    taxiFee = getTaxiAmount();
    printf("\n");

    printf("FEE \n");
    printf("------");
    registrationFee = getRegistrationFee();
    hotelFee = getHotelAmount(days);
    allowedHotelFee = 90 * days;
    printf("\n");


    printf("MEAL\n");
    printf("-----");
    allowedBreaksfastFee = 9.00 * days;
    allowedLunchFee = 12.00*days;
    allowedDinnerFee = 16.00 * days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    mealTotal = breaksfastFee + lunchFee + dinnerFee;
    getMealAmount(days);
    printf("\n");


    //calulations for total
    spentTotal = airfareFee + carRentalFee + vehicleExpense + parkingFee +taxiFee + registrationFee+hotelFee+privateCarMilage+mealTotal;
    allowedTotal= airfareFee+privateCarMilage+carRentalFee+allowedParking+allowedTaxiFee+allowedMealTotal+allowedHotelFee;

    //a lot of printing the expenses and whatnot 
    //displaying all of the totals

    printf("Employee Expense Report for: %s", employeename);
    printf("\n");
    printf("Total days of trip: %d\n", days);
    printf("Deparure time: %f  Arrival time: %f\n",departureTime,arrivalTime);

    printf("           Spent     Allowed\n");
    printf("--------------------\n");
    printf("Airfare:   %f      %f\n", airfareFee, airfareFee);
    printf("Car Rental: %f        %f\n", carRentalFee, carRentalFee);
    printf("Milage:    %f        %f\n", privateCarMilage, vehicleExpense);
    printf("Parking:   %f      %f\n",parkingFee, allowedParking);
    printf("Taxi:     %f         %f\n",taxiFee, allowedTaxiFee);
    printf("Registration: %f         %f\n",registrationFee, registrationFee);
    printf("Hotel:   %f     %f\n",hotelFee, allowedHotelFee);
    printf("Meal:   %f     %f\n",spentMealTotal,allowedMealTotal);
    printf("--------------------\n");
    printf("TOTALS:   %f      %f\n", spentTotal, allowedTotal);











    return 0;
}