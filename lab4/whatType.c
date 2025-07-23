#include <stdio.h>
#include <ctype.h>

int main(){
    char x;

    scanf("%c", &x);
    if (islower(x)) printf("lowercase");
    else if (isupper(x)) printf("uppercase");
    else if (isdigit(x)) printf("number");
    else printf("error");
}