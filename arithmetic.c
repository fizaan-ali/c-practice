#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter th first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Addition
    printf("Addition: %d + %d = %d", num1, num2, num1+num2);
    return 0;
}