#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Create a variable to store the minutes the user will give us
    //This will convert argv char to an int
    int minutes = atoi(argv[1]);

    //Create variables to store the rest of information that we need
    double minutesInYears, days, years;

    //Calculate minutes in 1 Year (365)
    int oneHour, oneDay, oneYear;

    oneHour = 60;
    oneDay = 24; 
    oneYear = 365; 

    minutesInYears = (60 * 24) * 365;

    //Convert number of minutes into days and years
    days = minutes / (60 * 24);

    years = minutes / minutesInYears;

    //Output data

    printf("You entered %d minutes.\nThis corresponds to %.2f days the equivalent to %.2f years.\n", minutes, days, years);

    return 0;
}