#include <stdio.h>


int main(void)
{
    double a, b, c, d;
    printf("\nPlease enter your weight(kg): ");
    scanf("%lf", &a);

    printf("\nNow please enter your height(m): ");
    scanf("%lf", &b);

    c = b * b;
    d = a / c;

    if (d < 18.5)
    {
        printf("\nYou are underweighted!");
    }
    else if (18.5 <= d < 24.9)
    {
        printf("\nYou are in normal weight.");
    }
    else if (25 <= d < 29.9)
    {
        printf("\nYou are owerweighted!");
    }
    else if (30 <= d < 34.9)
    {
        printf("\nYou are obese!!");
    }
    else
    {
        printf("\nYou need to leave eating dude!!!!!");
    }
}
