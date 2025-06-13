#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    ch = tolower(ch);

    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("The given alphabet is vowel.");
        }
        else printf("The given number is consonant.");
    }
    else printf("Error: Invalid Input");
    return 0;
}