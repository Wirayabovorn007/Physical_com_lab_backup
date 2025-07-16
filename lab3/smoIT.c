#include <stdio.h>

int main(){
    double sh_price, discount, amount;

    scanf("%lf", &sh_price);
    scanf("%lf", &discount);
    scanf("%lf", &amount);

    double total = sh_price * amount * (1 - discount/100);
    printf("%.2lf", total);
}