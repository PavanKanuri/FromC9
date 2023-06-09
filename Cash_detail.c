#include<stdio.h>
#include<cs50.h>

int main()
{
    double c;
    int x, T = 0, Q = 0, D = 0, N = 0, P = 0;
    // taking input of change
    do
    {
        c = get_double("Change owed:");
    }
    while (c <= 0);
    //rounding input (float)
    x = c * 100;
    while (x != 0)
    {
        //for checking and adding number of quarters
        if (x >= 25)
        {
            Q = x / 25;
            x = x % 25;
        }
        //for checking and adding number of dimes
        else if (x >= 10)
        {
            D = x / 10;
            x = x % 10;
        }
        //for checking and adding number of nickels
        else if (x >= 5)
        {
            N = x / 5;
            x = x % 5;
        }
        //for checking and adding number of pennies
        else if (x >= 1)
        {
            P = x;
            x = x % 1;
        }
    }
    T = Q + D + N + P;
    //printing total number of coins
    printf("%d\n", T);
}
