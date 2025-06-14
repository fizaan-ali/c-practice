#include <stdio.h>
int main(){
    int original, reversed = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &original);

    int num = original;
    
    while(num!=0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num/=10;
    }
    printf("The original no. is:  %d\n", original);
    printf("The reversed no. is:  %d", reversed);
    
    return 0;
}