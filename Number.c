#include <stdio.h>
#include <stdlib.h>

int main(){
    char *num = malloc(sizeof(char) * 6);
    char *n = malloc(sizeof(char) *3);
    int i = 0;
    char *reallyN = n;

    scanf("%s", num);

    while(i != 2)
    {
        *reallyN = *num;
        num++;
        reallyN++;
        i++;
    }
    *reallyN = '\0';

    while (*num)
    {
        printf("%c", *num);
        num++;
    }

    while (*n)
    {
        printf("%c", *n);
        n++;
    }
    

}