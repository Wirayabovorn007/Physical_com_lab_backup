#include <stdio.h>

int main(){

    char digit[6];
    scanf("%s", digit);    

    int i = 0;  
    while (i < 5)
    {
        //space
        int s = 0;
        while (s<i){
            printf("%c", 32); //ASCII 32  = SP
            s++;
        }
        int j = 0;
        while (j<=i){
            printf("%c", digit[j]);
            j++;
        }
        i++;
        if (i<5) printf("%c", 10);
    }
    
}