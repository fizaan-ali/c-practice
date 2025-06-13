#include <stdio.h>

int main(){
    int num, product = 1; 
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int i = num;
    while(i>=1){
        product = product * i;
        i--;
    }
    printf("Factorial of %d is %d", num, product);
    
    return 0;
}