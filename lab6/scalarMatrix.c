#include <stdio.h>

int main(){
	float m1[3][3];
 
    scanf("%f%f%f%f%f%f%f%f%f", 
    &m1[0][0], &m1[0][1], &m1[0][2],
    &m1[1][0], &m1[1][1], &m1[1][2], 
    &m1[2][0], &m1[2][1], &m1[2][2]);

	int check = (m1[0][1] == 0 && m1[0][2] == 0 && m1[1][0] == 0 
	&& m1[1][2]==0 && m1[2][0] == 0 && m1[2][1] == 0);

	if (((m1[0][0] == m1[1][1]) &&  (m1[0][0] == m1[2][2])) && check) printf("This is a scalar matrix");
	else printf("This is not a scalar matrix");
}