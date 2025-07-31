#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float inAccMoney=0.0, cash=0.0;
    char op;
    float moneyInput;
    int err=0;

    scanf("%f", &inAccMoney);
    scanf("%f", &cash);

    while (1){
        if (err == 3) break;

        scanf(" %c", &op);
        if (op == 'E') break;

        scanf("%f", &moneyInput);

        if (op == 'D')
        {
            if (cash < (moneyInput))
                err++;
            else{
                cash -= (moneyInput);
                inAccMoney += (moneyInput);
                err = 0;
            }
        } 
        else if (op=='W')
        {
            if (inAccMoney < (moneyInput))
                err++;
            else{
                inAccMoney -= (moneyInput);
                cash += (moneyInput);
                err = 0;
            }
         }else{
        err++;
    }
        
    }
    printf("%.2f\n", inAccMoney);
    printf("%.2f", cash);
}