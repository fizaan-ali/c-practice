#include <stdio.h>
int main(){
    int n;
    printf("Enter the no. of terms (of fibonacci series): ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci Series:  ");

    for(int i=1; i<=n; i++){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}