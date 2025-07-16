#include <stdio.h>

int main(){

    char digit[80];
    scanf("%s", digit);    

    printf("%-81.1s", digit); 
    printf("%-81.2s", digit); 
    printf("%-81.3s", digit); 
    printf("%-81.4s", digit); 
    printf("%-81.5s", digit); 
}