#include <stdio.h>


//function for getting the total amount spent on hotels
double getHotelAmount(int days)
{

	double hotelFee;

	printf("How much did you spend on Hotels daily: ");//ask for the daily amount spent on hotels
	scanf("%lf", &hotelFee);

	while(hotelFee < 0)//if value is less than 0 ask again
	{
		printf("Value cannot be negative, enter correct daily hotel fee: ");
		scanf("%lf", &hotelFee);
	}

	return hotelFee * days;//return the total amount spent on hotels

	
}
