#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter th first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Addition
    printf("Addition: %d + %d = %d\n", num1, num2, num1+num2);

    // Subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1-num2);

    // Multiplication
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1*num2);

    // Division
    if(num2!=0){
        printf("Integer Division: %d / %d = %d\n", num1, num2, num1/num2);
        printf("Float Division: %d / %d = %.2f\n", num1, num2, (float)num1/num2 );
    }
    else printf("Error: Cannot performed by zero...");

    // Modulus
    if(num2!=0){
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1%num2);
    }
    else printf("Error: Cannot performed by zero..");
    return 0;
}