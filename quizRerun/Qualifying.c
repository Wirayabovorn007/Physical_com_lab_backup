#include <stdio.h>

int main(){
    char racer1[50], racer2[50], racer3[50], *fastestTimeRacer;
    float time1=0.000, time2=0.000, time3=0.000, fastestTime;

    scanf("%f %[^\n]", &time1, racer1);
    fastestTime = time1;
    fastestTimeRacer = racer1;
    scanf("%f %[^\n]", &time2, racer2);
    if (time2 < fastestTime){
        fastestTime = time2;
        fastestTimeRacer = racer2;
    }
    scanf("%f %[^\n]", &time3, racer3);
    if (time3 < fastestTime) {
        fastestTime = time3;
        fastestTimeRacer = racer3;
    }

    printf("%s is Fastest : %.3f", fastestTimeRacer, fastestTime);
}