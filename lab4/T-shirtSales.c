#include <stdio.h>
#include <math.h>

int main(){
    float shirt_p, disc, amount;

    scanf("%f", &shirt_p);
    scanf("%f", &disc);
    scanf("%f", &amount);

    float pro1 =  amount * shirt_p * (1 - (disc/100));
    float pro2 = (amount - floor((amount / 3))) * shirt_p;

    if (pro1 <= pro2) printf("Discount %.0f%%\n%.2f", disc, pro1);
    else printf("Buy 2 Get 1\n%.2f", pro2);
}