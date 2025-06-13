#include <stdio.h>

int main(){
    int num, product = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=num; i>=1; i--){
        product = product * i;
    }
    printf("The factorial of %d is %d.", num, product);

    return 0;
}