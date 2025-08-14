#include <stdio.h>
#include <math.h>
#include <string.h>

float getTankVal(char *name){
	if (strcmp(name, "Nano") == 0) return 6.6;
	if (strcmp(name, "Toh") == 0) return 5.5;
	if (strcmp(name, "Mickey") == 0) return 5.5;
}

int main(){
	int n;
	char name1[10], name2[10], name3[10];
	float n1=0, n2=0,n3=0;
	float n1use, n2use,n3use;

	scanf("%d", &n);
	scanf("%s %s %s", name1, name2, name3);
	for (int i=0; i<n;i++) {
		scanf("%f %f %f", &n1use, &n2use, &n3use);
		n1+=n1use;
		n2+=n2use;
		n3+=n3use;
	}
	
	int cal1 = ceil(n1 / getTankVal(name1));
	int cal2 = ceil(n2 / getTankVal(name2));
	int cal3 = ceil(n3 / getTankVal(name3));
	printf("%s: %d refills\n%s: %d refills\n%s: %d refills", name1, cal1, name2,cal2, name3, cal3);
}