#include<stdio.h>
int main(){
    float celcius, fahrenheit;
    printf("Enter the temperature (in celcius): ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;
    printf("The given temperature in fahrenheit is: %.2f", fahrenheit);

    return 0;
}