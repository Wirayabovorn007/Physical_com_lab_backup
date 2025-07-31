#include <stdio.h>

int main(){
    int i = -1, age=0, height=0;
    int countCond1=0,countCond2=0,countCond3=0,countCond4=0,avgAge=0;
    float avgHeight=0.0, avgWeight=0.0, weight=0.0;
    while (++i<50)
    {
        scanf("%d %d %f", &age, &height, &weight);
        avgAge+=age;
        avgHeight+=height;
        avgWeight+=weight;
        if (age >= 20 && height >= 160) countCond1++;
        if (age < 20 && (height <= 180 || weight >= 60)) countCond2++;
        if (age >= 30 && weight >= 40 && weight <= 80) countCond3++;
        if (age < 40 && (weight < 85 || height <= 200)) countCond4++;
    }
    avgAge /= 50;
    avgHeight /= 50;
    avgWeight /= 50;
    
    printf("Age >= 20 and Height >= 160: %d\n", countCond1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", countCond2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", countCond3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", countCond4);
    printf("Average Age: %d\n", avgAge);
    printf("Average Height: %.2f\n", avgHeight);
    printf("Average Weight: %.2f", avgWeight);
}