#include <stdio.h>
#include <math.h>

int main(){
	float blood= 2800.00;
	float hpLoss = 2.0 / 100.0;
	int round;
	scanf("%d", &round);
	int hrs = (round * 30) / 60;
	float cal = blood * pow(1 - hpLoss, hrs);
	printf("%.2f\n", blood - cal);
	if ((blood - cal) > blood*0.3) printf("Danger");
	else printf("Safe");
}