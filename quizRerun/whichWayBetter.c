#include <stdio.h>

int main(){
	float fuel_price;
    int way[4];
    float consumption_r[4];
    float toll = 0;
    float sumOfExpress = 0;
    float sumRomkloa = 0;

    scanf("%f", &fuel_price);
    for (int i=0; i<4; i++) scanf("%d", &way[i]);
    for (int i=0; i<4; i++) scanf("%f", &consumption_r[i]);
    for (int i=0; i<4; i++){
        int distance = way[i] == 0? 25:29;
        float liters = (float)distance/consumption_r[i];
        toll = way[i] == 0? 0:60;
        float cost = (liters * fuel_price) + toll;
        if (way[i] == 0) sumRomkloa += cost;
        else sumOfExpress += cost;
        printf("Day %d: fuel %.2f L, cost %.2f Baht\n", i+1,liters, cost);
    }
    int countRomKlaoW = 0, countExpressW = 0;
    for (int i=0;i<4;i++) if (way[i] == 0)  countRomKlaoW++; else countExpressW++;
    if (countExpressW == 0) countExpressW++;
    if (countRomKlaoW == 0) countRomKlaoW++;
    printf("Expressway: %.2f Baht\n", sumOfExpress / countExpressW);
    printf("Romklao: %.2f Baht", sumRomkloa / countRomKlaoW);
}