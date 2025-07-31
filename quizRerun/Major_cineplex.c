#include <stdio.h>

int main(){
    int age, day, price=0;

    scanf("%d%d", &age, &day);

    if (day == 4) 
        price = 100;
    else{
        if (age <= 12) price=120;
        if (age >= 13 && age <= 59) price=220;
        if (age >= 60) price =140;
        if (day == 7 || day == 1) price +=20;
    }
    
    printf("Ticket price: %d Baht", price);
}