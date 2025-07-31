#include <stdio.h>

int main(){
    int isSafe, raceRound, safetyCarRound;
    float distance = 0.000;
    int countErr = 0;

    scanf("%d%f%d%d", &isSafe, &distance, &raceRound, &safetyCarRound);

    if (isSafe != 1) countErr+=1;
    if (!(raceRound > safetyCarRound + 2)) countErr+=2;
    if (!(distance < 1.000)) countErr+=1;

    if (countErr == 0) printf("DRS allowed");
    else printf("DRS not allowed %d", countErr);
}