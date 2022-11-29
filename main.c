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
    allowedTaxiFee = 10 * days;
    //getTaxiAmount(parkingSpent, allowedTaxiFee);
    printf("\n");

    printf("MEAL\n");
    printf("-----");
    allowedBreaksfastFee = 9.00 * days;
    allowedLunchFee = 12.00*days;
    allowedDinnerFee = 16.00 * days;
    allowedMealTotal = allowedBreaksfastFee + allowedLunchFee + allowedDinnerFee;
    mealTotal = breaksfastFee + lunchFee + dinnerFee;
    //getMealAmount(allowedMealTotal, spentMealTotal);
    printf("\n");


    //calulations for total
    spentTotal = airfareFee + carRentalFee + vechileExpense + parkingFee +taxiFee + registrationFee+hotelFee+privateCarMilage+mealTotal;
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
    printf("Milage:    %f        %f\n", privateCarMilage, privateCarMilage);
    printf("Parking:   %f      %f\n",parkingFee, allowedParking);
    printf("Taxi:     %f         %f\n",taxiFee, allowedTaxiFee);
    printf("Registration: %f         %f\n",registrationFee, registrationFee);
    printf("Hotel:   %f     %f\n",hotelFee, allowedHotelFee);
    printf("Meal:   %f     %f\n",spentMealTotal,allowedMealTotal);
    printf("--------------------\n");
    printf("TOTALS:   %f      %f\n", spentTotal, allowedTotal);











    return 0;
}