#include <stdio.h>
int main(){
    int original, reversed = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &original);
    
    int num = original;
    while(num != 0 ){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if(original == reversed) printf("The given number is palindrome..");
    else printf("The given number is not palindrome.");
    
    return 0;
}