#include <stdio.h>

int main(){
    char num[6];
    
    scanf("%s", num);
    
    int l = 0;
    while (l < 5)
    {
        //space
        int sp = 0;
        while (sp < l){
            putchar(32);
            sp++;
        }
        //number
        int n = 0;
        while (n <= l)
        {
            printf("%c", num[n]);
            n++;
        }
        l++;
        if (l < 5) putchar(10); //new line
    }
}