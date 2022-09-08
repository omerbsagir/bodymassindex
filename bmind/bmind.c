#include <stdio.h>


int main(void)
{
    float a, b;
    a = 0.0;
    b = 0.0;
    
    printf("\nPlease enter your weight(kg): ");
    scanf("%f", &a);

    printf("\nNow please enter your height(m): ");
    scanf("%f", &b);

    float c = (b * b);
    float d = (a / c);

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
        printf("\nYou need to leave eating!!!!!");
    }
}
