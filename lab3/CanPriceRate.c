#include <stdio.h>

int main(){
    double price, diameter, height;
    double PI = 3.14159265359;

    scanf("%lf", &price);
    scanf("%lf", &diameter);
    scanf("%lf", &height);

    double v = height * PI * ((diameter / 2) * (diameter / 2));
    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf", (price / v));
}