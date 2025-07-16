#include <stdio.h>

int main(){
    double width;
    double height;

    scanf("%lf", &width);
    scanf("%lf", &height);

    printf("Perimeter of rectangle = %.4lf units", 2*(width+height));
}