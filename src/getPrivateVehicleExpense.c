#include <stdio.h>

//func for private vehicle expenses 
double getPrivateVehicleExpense()
{
	double privateCarFee;
	const double RATE = 0.38;
	double miles;

	printf("How many miles were driven in a private vehicle?\n");
	scanf("%lf", &miles);
	
	while(miles < 0)
	{
		printf("Error: Please enter a number greater than 0. Try again!\n");
		scanf("%lf", &miles);
	}
	
	privateCarFee = miles * RATE;
	return privateCarFee;
}
