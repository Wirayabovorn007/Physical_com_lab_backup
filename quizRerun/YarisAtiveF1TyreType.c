#include <stdio.h>

int main(){
    char c;

    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') c+=32;
    switch (c)
    {
    case 's':
        printf("Soft");
        break;
    case 'm':
        printf("Medium");
        break;
    case 'h':
        printf("Hard");
        break;
    case 'i':
        printf("Intermediate");
        break;
    case 'w':
        printf("Wet");
        break;
    default:
        break;
    }
}