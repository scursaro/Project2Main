#include <stdio.h>

//func that is used for airplane travel expenses
double getAirfareAmount()
{
	double airfareFee;
	printf("What was the total cost of the air faire?\n");
	scanf("%lf", &airfareFee);

	while(airfareFee < 0)
	{
		printf("Error: Please enter a number greater than 0. Try again!\n");
		scanf("%lf", &airfareFee);
	}
	return airfareFee;
}	
