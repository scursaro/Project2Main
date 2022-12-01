#include <stdio.h>
//function for getting the total amount spent on taxis
double getTaxiAmount()
{
	double taxiAmount;
	printf("How much did you spend on taxis: ");//ask how much was spent on taxis
	scanf("%lf", &taxiAmount);

	while(taxiAmount < 0)//if amount is less than 0 ask again
	{
		printf("Amount cannot be negative, enter correct amount: ");
		scanf("%lf", &taxiAmount);
	}
	return taxiAmount;//return the total amount spent on taxis 
	
}
