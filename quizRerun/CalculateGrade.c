#include<stdio.h>

int main() {
    char info[50];
    int g1, g2, g3, g4, g5, g6;


	scanf(" %[^\n]", info);
	scanf("%d %d %d %d %d %d", &g1, &g2, &g3, &g4, &g5, &g6);

	float cal = (float)((g1)+(g2)+(g3)+(g4)+(g5)+(g6)) / 6.0;

	printf("Grade announcement 1/2568: %s\nGPS/GPA: %.2f",info, cal);

    return 0;
}