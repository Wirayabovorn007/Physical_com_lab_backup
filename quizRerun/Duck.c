#include <stdio.h>

int main(){
    int gupgup;

    scanf("%d", &gupgup);
    if (gupgup == 0){
        printf("Duck Type: Silent Duck");
    }
    else if (gupgup >= 1 && gupgup <= 10){
        printf("Duck Type: Chill Duck");
    }
    else if (gupgup >= 11 && gupgup <= 50){
        printf("Duck Type: Happy Duck");
    }
    else if (gupgup > 50){
        printf("Duck Type: Talkative Duck");
    }else printf("Error");
}