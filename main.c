//This will be the main method in our project 2





//also need to include the basics, and include the other files
#include <stdlib.h>
#include <stdio.h>

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
    double vechileExpense;
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

    //days = getDays(days); //this will call the function to get the days

    //getTime(departureTime, arrivalTime);

    printf("Travel  \n");
    printf("---------");
    //airfareFee = getAirfareAmount(airfareFee); calls the function
    //carRentalFee = getCarRentalAmount(carRentalFee); function call
    //getPrivateVehicleExpense(privateCarFee);

    allowedParking = 6 * days;
    //getParkingAmount(parkingSpent, allowedParking);


    //functoin calls to the unfinished functions

    //a lot of printing the expenses and whatnot 





    return 0;
}