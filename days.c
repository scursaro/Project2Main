include <stdio.h>

int numberOfDays(){

    int days;
    printf("How many days did the trip last?");
    scanf("%lf", &days);

    while(days < 1){
        printf("How many days did the trip last?");
        scanf("%lf", &days);
    }

    return days;
}