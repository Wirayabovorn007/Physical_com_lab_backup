#include <stdio.h>
#include <math.h>

int main(){
    char x[10], y[10];
    int numX=0, numY=0;

    scanf("%s%s", x,y);
    for (int i = 0; x[i]; i++) if (x[i]>='0' && x[i] <= '9') numX = numX * 10 + (x[i] - '0');
    for (int i = 0; y[i]; i++) if (y[i]>='0' && y[i] <= '9') numY = numY* 10 + (y[i] - '0');
    printf("%d", (int)pow(2, numY - numX));
}