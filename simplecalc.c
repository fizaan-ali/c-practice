#include <stdio.h>
int main(){
    float num1, num2;
    char operator;

    printf("Enter the operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter the two number: ");
    scanf("%f %f", &num1, &num2);

    switch(operator){
        case '+': 
        printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);     break;
        case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);     break;
        case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);     break;
        case '/':
        if(num2!=0){
            printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);     
        }
        else printf("Error: Division by zero!!!");               break;
        default: printf("Invalid operator!");
    }
    return 0;
}