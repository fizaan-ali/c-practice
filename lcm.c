#include <stdio.h>

int main(){
    int a, b, x, y;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    if(a == 0 || b == 0){
        printf("LCM is 0.");
        return 0;
    }
    x = a, y = b;
    while(x!=y){
        if(x>y)
            x = x-y;
        else 
            y = y-x;
    }
    int gcd = x;
    int lcm = (a*b)/gcd;

    printf("LCM of %d and %d is %d", a, b, lcm);

    return 0;
}