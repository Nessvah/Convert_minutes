#include <stdio.h>

int main(int argc, char *argv[])
{
    //Create a variable to store the minutes the user will give us
    char *numberOfMinutes = argv[1];



    printf("Number of minutes entered: %s\n", numberOfMinutes);

    return 0;
}