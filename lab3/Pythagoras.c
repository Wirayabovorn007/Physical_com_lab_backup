#include <stdio.h>
#include <math.h>

int main(){
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    double c = sqrt(a*a+b*b);
    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("%.2lf", max);
}