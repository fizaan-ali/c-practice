#include <stdio.h>

int main(){
    int base, exp;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    int result = 1;
    for(int i=1; i<=base; i++){
        result = result * base;
    }
    printf("%d raised to the power %d is :  %d", base, exp, result);
    
    return 0;
}