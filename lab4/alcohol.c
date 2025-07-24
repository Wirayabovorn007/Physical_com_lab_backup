#include <stdio.h>
#include <math.h>

int main(){
    char gender; //M,F
    float weight;
    char isLicensed; //Y,N
    float volume_of_drinks;
    float percent_of_alcohol_in_drinks;
    int drink_amount_bottle;
    int rest_time;

    scanf("%c", &gender);
    scanf("%f", &weight);
    scanf(" %c", &isLicensed);
    scanf("%f", &volume_of_drinks);
    scanf("%f", &percent_of_alcohol_in_drinks);
    scanf("%d", &drink_amount_bottle);
    scanf("%d", &rest_time);

    float alcohol_in_blood;
    float amount_of__drunk_alcohol =(( percent_of_alcohol_in_drinks * volume_of_drinks * drink_amount_bottle ) / 100);
    if (gender == 'M') alcohol_in_blood = amount_of__drunk_alcohol / (weight*0.68*10);
    if (gender == 'F') alcohol_in_blood = amount_of__drunk_alcohol / (weight*0.55*10);

    alcohol_in_blood *= pow(1 - 0.15, rest_time);

    if (alcohol_in_blood <= 0.05 && isLicensed == 'Y') printf("Safe");
    else printf("Not Safe");
    


}