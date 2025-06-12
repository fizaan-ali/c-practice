#include<stdio.h>
int main(){
    float fahrenheit, celcius;
    printf("Enter the temperature (in fahrenheit): ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * (float)5/9;
    printf("The given temperature in celcius is: %.2f", celcius);
    
    return 0;
}