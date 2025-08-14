#include <stdio.h>


int main(){
	int t1[7], t2[7];
	int sumt1=0, sumt2=0, t1f=0, t2f=0, eq=0;
	char t1_name[101], t2_name[101];

	scanf(" %[^\n]", t1_name);
	for (int i=0; i<7; i++){
		scanf("%d", &t1[i]);
		sumt1+=t1[i];
	}
	scanf(" %[^\n]", t2_name);
	for (int i=0; i<7; i++){
		scanf("%d", &t2[i]);
		sumt2+=t2[i];
	}
	for (int i=0; i<7; i++){
		if (t1[i] == t2[i])
		{
			eq++;
			continue;
		}
		if (t1[i] < t2[i]) t1f++;
		else t2f++;
	}
	printf("%s: %d minutes, average %d minutes/day\n", t1_name, sumt1, sumt1/7);
	printf("%s: %d minutes, average %d minutes/day\n", t2_name, sumt2, sumt2/7);
	printf("Faster days - %s: %d, %s: %d, Equal: %d", t1_name, t1f, t2_name, t2f, eq);
}