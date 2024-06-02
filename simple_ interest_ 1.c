#include <stdio.h>
int main()
{
    float principalAmount, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principalAmount);

    printf("Enter the rate of interest per annum (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    rate = rate * (rate/100); 

    simpleInterest = (principalAmount * rate * time) / 100;

    
    printf("The simple interest is: %.2f\n", simpleInterest);
}