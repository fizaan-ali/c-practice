#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    if(a==0)  {  printf("GCD is %d", b); return 0; }
    if(b==0)  {  printf("GCD is %d", a); return 0; }

    
    while(a!=b){
        if(a>b)    
            a-=b;
        else
            b-=a;
    }


    printf("GCD is %d", a);

    return 0;
}