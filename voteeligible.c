#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>18) printf("You're eligible to vote.");
    else printf("You're not eligible to vote.");
    
    return 0;
}