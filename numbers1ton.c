#include <stdio.h>

int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        printf("%d ", i);
    }

    return 0;
}