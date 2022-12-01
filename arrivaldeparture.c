#include <stdio.h>

double getDeparture(){

    //create variable to return.
    double departure;

    //asks and gets the departure time.
    printf("At what time did you depart? (In military time)\n");
    scanf("%lf", &departure);

    //while loop that checks that the input is valid.
    while(departure < 0 || departure >23.59){
        printf("Please Enter a Valid Time for departure (In military time):\n");
        scanf("%lf", &departure);
    }

    return departure;
}

double getArrival(){

    //create variable to return.
    double arrival;

    //asks and gets the arrival time.
    printf("At what time did you arrive? (In military time)\n");
    scanf("%lf", &arrival);

    //while loop that checks that the input is valid.
    while(arrival < 0 || arrival >23.59){
        printf("Please Enter a Valid Time for arrival (In military time):\n");
        scanf("%lf", &arrival);
    }

    return arrival;
}