#include <stdio.h>

int main(){
    float h, w;

    scanf("%f", &h);
    scanf("%f", &w);

    h /= 100;
    float BMI = w / (h*h);
    printf("%.6f", BMI);

}