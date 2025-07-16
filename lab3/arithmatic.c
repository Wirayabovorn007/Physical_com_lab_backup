#include <stdio.h>

int main(){
    double f1, f2;
    scanf("%lf,%lf", &f1, &f2);
    printf("The sum of the given numbers : %.6lf\n", (f1 + f2));
    printf("The difference of the given numbers : %.6lf\n", (f1-f2));
    printf("The product of the given numbers : %.6lf\n", (f1*f2));
    printf("The quotient of the given numbers : %.6lf",(f1/f2));
}