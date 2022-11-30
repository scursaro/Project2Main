//this is the funcion that will obtain the amount for each meal
void getMealAmount(int numberDays)
{
    //create local variables to store the user input
    int days, numDays = numberDays;
    double breakfast, lunch, dinner;
    double firstDay, lastDay, departureTime, arrivalTime;
    double allowedBreakfastFee = 9.00, allowedLunchFee = 12.00, allowedDinnerFee = 16.00;
    double breakfastFee, lunchFee, dinnerFee;

    //for loop that will ask the price of meals for each day
    for(days = 1; days <= numDays; days++)
    {
        printf("\nDay: %d\n", days);

        if(days < 2 && departureTime > 0.00 && departureTime <= 7.00)
        {
            printf("Enter the amount for breakfast: ");
            scanf("%lf", &breakfastFee);

            printf("Enter the amount for lunch: ");
            scanf("%lf", &lunchFee);

            printf("Enter the amount for dinner: ");
            scanf("%lf", &dinnerFee);
        }

        if(days < 2 && departureTime > 7.01 && departureTime <= 12.00)
        {
            printf("Enter the amount for lunch: ");
            scanf("%lf", &lunchFee);

            printf("Enter the amount for dinner: ");
            scanf("%lf", &dinnerFee);
        }

        if(days < 2 && departureTime > 12.01 && departureTime <= 18.00)
        {
            printf("Enter the amount for dinner: ");
            scanf("%lf", &dinnerFee);
        }

        if(days > 1 && days < numDays)
        {
            printf("Enter the amount for breakfast: ");
            scanf("%lf", &breakfastFee);

            printf("Enter the amount for lunch: ");
            scanf("%lf", &lunchFee);

            printf("Enter the amount for dinner: ");
            scanf("%lf", &dinnerFee);
        }

        if(days == numDays && arrivalTime > 8.00 && arrivalTime <= 13.00)
        {
            printf("Enter the amount for breakfast: ");
            scanf("%lf", &breakfastFee);

        }

        if(days == numDays && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            printf("Enter the amount for breakfast: ");
            scanf("%lf", &breakfastFee);

            printf("Enter the amount for lunch: ");
            scanf("%lf", &lunchFee);
        }

        if(days == numDays && arrivalTime > 19.01)
        {
            printf("Enter the amount for breakfast: ");
            scanf("%lf", &breakfastFee);

            printf("Enter the amount for lunch: ");
            scanf("%lf", &lunchFee);

            printf("Enter the amount for dinner: ");
            scanf("%lf", &dinnerFee);
        }

        allowedBreakfastFee *= days;
        allowedLunchFee *= days;
        allowedDinnerFee *= days;
        double allowedMealtotal = allowedBreakfastFee + allowedLunchFee + allowedDinnerFee;
        double spentMealTotal = breakfastFee + lunchFee + dinnerFee;

        printf("%f\n",allowedMealtotal);
        printf("%f", spentMealTotal);
    }

}

