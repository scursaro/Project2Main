#include <stdio.h>

//func that is used for car rental expenses
double getCarRentalAmount()
{
	double carRentalFee;
	printf("What was the total cost of any car rentals?\n");
	scanf("%lf", &carRentalFee);

	while(carRentalFee < 0)
	{
		printf("Error: Please enter a number greater than 0. Try again!\n");
		scanf("%lf", &carRentalFee);
	}
		
	return carRentalFee;
}
