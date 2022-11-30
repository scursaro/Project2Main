include <stdio.h>

public double getDeparture(){

    double departure;

    printf("At what time did you depart? (In military time)\n");
    scanf("%lf", &departure);

    while(departure < 0 || departure >23.59){
        printf("Please Enter a Valid Time for departure (In military time):\n");
        scanf("%lf", &departure);
    }

    return departure;
}

public void getArrival(){

}