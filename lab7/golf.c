#include <stdio.h>
#include <math.h>

int main()
{
	int degree, u;
	scanf("%d%d", &degree,&u);
	double PI = 3.141592653589793;
	double radius = ((double)degree * PI) / 180.00000000000000000000000000;
	double h = (pow(u, 2.0) * pow(sin(radius), 2.0)) / (2.0 * 9.81);

	printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", degree, u, h);
}