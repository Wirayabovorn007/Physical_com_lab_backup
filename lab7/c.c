#include <stdio.h>
#include <math.h>

int main(){
    float x, y;
    scanf("%f%f", &x,&y);
    printf("sqrt(%.0f^2+%.0f^2)=%.2f",  x, y, sqrt(pow(x,2)+pow(y,2)));
}