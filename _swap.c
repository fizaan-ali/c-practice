#include<stdio.h>
int main(){
    int a = 6, b = 4, temp = 0;
    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d", a, b);

    return 0;
}