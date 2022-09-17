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
        float goalw;
        printf("What is your weight goal?\n");
        scanf("%f", &goalw);
        float fark = goalw - a;
        printf("How many weeks are you planning to reach it?\n");
        int weeks;
        scanf("%d", &weeks);
        float freq = fark / weeks;
        double dailycals = freq * 1000;
        printf("You need to take %lf calories more daily to reach your goal\n", dailycals);
        printf("If you take those calories you will gain %f kilograms each week.\n", freq);


    }
    else if ( 18.5 <= d && d < 25.1 )
    {
        printf("You are normal weighted \n");
    }
    else if ( 25.1 <= d && d < 30 )
    {
        printf("You are overweighted! \n");
        float goalw;
        printf("What is your weight goal?\n");
        scanf("%f", &goalw);
        float fark = a - goalw;
        printf("How many weeks are you planning to reach it?\n");
        int weeks;
        scanf("%d", &weeks);
        float freq = fark / weeks;
        double dailycals = freq * 1000;

        printf("You need to create %lf calorie deficit daily to reach your goal\n", dailycals);
        printf("If you can do it you will lose %f kilograms each week.\n", freq);

    }
    else if ( 30 <= d && d < 35 )
    {
        printf("You are obese!! \n");
        float goalw;
        printf("What is your weight goal?\n");
        scanf("%f", &goalw);
        float fark = goalw - a;
        printf("How many weeks are you planning to reach it?\n");
        int weeks;
        scanf("%d", &weeks);
        float freq = fark / weeks;
        double dailycals = freq * 1000;

        printf("You need to create %lf calorie deficit daily to reach your goal\n", dailycals);
        printf("If you can do it you will lose %f kilograms each week.\n", freq);

    }
    else
    {
        printf("You are extremely obese!!!! \n");
        float goalw;
        printf("What is your weight goal?\n");
        scanf("%f", &goalw);
        float fark = goalw - a;
        printf("How many weeks are you planning to reach it?\n");
        int weeks;
        scanf("%d", &weeks);
        float freq = fark / weeks;
        double dailycals = freq * 1000;
        printf("You need to create %lf calorie deficit daily to reach your goal\n", dailycals);
        printf("If you can do it you will lose %f kilograms each week.\n", freq);
    }
}
