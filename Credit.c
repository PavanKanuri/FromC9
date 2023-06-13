#include<stdio.h>

int luhn_check(long x);

int main(void)
{
    int r, f = 0;
    long c;
    scanf("%ld",&c);
    long q = c;
    //checking luhn algorithm
    int v = luhn_check(c);
    //if card is valid based on luhn algorithm
    if (v == 1)
    {
        //checking number of digits in the card number
        while (q != 0)
        {
            q = q / 10;
            //taking first two digits of the card number
            if (q > 10)
            {
                r = q;
            }
            f++;
        }
        //checking the type of card based on the first two digits and total number of digits
        //checking if card is Visa or not
        if (f == 13)
        {
            if (r >= 40 && r <= 49)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        //checking if card is American Express or not
        else if (f == 15)
        {
            if (r == 34 || r == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        //checking if card is Master Card or Visa or Invalid
        else if (f == 16)
        {
            if (r >= 51 && r <= 55)
            {
                printf("MASTERCARD\n");
            }
            else if (r >= 40 && r <= 49)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

//defining luhn_check function
int luhn_check(long x)
{
    int v, R, Q, T = 0, S1 = 0, S2 = 0;
    while (x != 0)
    {
        R = x % 100;
        Q = R / 10;
        Q = Q * 2;
        S1 = S1 + R % 10;
        x = x / 100;
        if (Q < 10)
        {
            S2 = S2 + Q;
        }
        else if (Q >= 10)
        {
            while (Q != 0)
            {
                S2 = S2 + Q % 10;
                Q = Q / 10;
            }
        }
    }
    T = S1 + S2;
    //returning validity of card using luhn_check
    if (T % 10 == 0)
    {
        v = 1;
    }
    else
    {
        v = 0;
    }
    return v;
}
