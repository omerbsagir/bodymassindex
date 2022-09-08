#include <stdio.h>


int main(void)
{
    double a, b;
    a = 0.0;
    b = 0.0;
    
    printf("\nPlease enter your weight(kg): ");
    scanf("%lf", &a);

    printf("\nNow please enter your height(m): ");
    scanf("%lf", &b);

    double c = (b * b);
    double d = (a / c);

    if ( d < 18.5 )
    {
        printf("You are underweighted! \n");
    }
    else if ( 18.5 <= d < 25.1 )
    {
        printf("You are normal weighted \n");
    }
    else if ( 25.1 <= d < 30 )
    {
        printf("You are overweighted! \n");
    }
    else if ( 30 <= d < 35 )
    {
        printf("You are obese!! \n");
    }
    else
    {
        printf("You are extremely obese!!!! \n");
    }
    
}
