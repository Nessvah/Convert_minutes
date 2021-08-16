#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Create variables to store the information that we need
    double minutesInYears, days, years;
    int minutesEntered;


    //Ask the user for input
    printf("Please enter number of minutes: \n");
    scanf("%d", &minutesEntered);
    
    //Calculate minutes in 1 Year (365)

    minutesInYears = (60 * 24) * 365;

    //Convert number of minutes into days and years
    days = minutesEntered / (double)(60 * 24);

    years = minutesEntered / minutesInYears;

    //Output data

    printf("You entered %d minutes.\nThis corresponds to %.2f days the equivalent to %f years.\n", minutesEntered, days, years);

    return 0;
}