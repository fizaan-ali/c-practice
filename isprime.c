#include <stdio.h>

int main(){
    int num, isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num == 0 || num == 1 || (num%2 == 0 && num != 2))
         isPrime = 0;
    if(num == 2)    isPrime = 1;
    for(int i=3; i<=num/2; i+=2){
        if(num % i == 0){    
        isPrime = 0;
        break;
        }
    }
    if(isPrime == 0) printf("The given number is not prime.");
    else printf("The given number is prime.");
    
    return 0;
}