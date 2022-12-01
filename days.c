#include <stdio.h>

int numberOfDays(){
    
    //create variable for the days.
    int days;

    //ask the user for the amount of days.
    printf("How many days did the trip last?\n");
    //get the input for the user.
    scanf("%d", &days);

    //loop that ensures the user has a vaid input for days.
    while(days < 1){
        printf("How many days did the trip last?\n");
        scanf("%d", &days);
    }

    return days;
}