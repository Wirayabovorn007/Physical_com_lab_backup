#include <stdio.h>

int	invalid(int value[7], int N)
{
	int a = value[0], b = value[1], c = value[2];
	int d = value[3], e = value[4];
	int f = value[5], g = value[6];
	if (f < 1 || f > N || g < 1 || g > N) {printf("Error"); return 1;}
	return 0;	
}

int main()
{
    int N; // last station
    int fare;
    int distance;
    int value[7]; //a = first, b = station fare, c, ..
 
    scanf("%d", &N);
    for (int i= 0; i<7; i++) 
        scanf(" %d", &value[i]);
	if (invalid(value, N))
		return (0);
    distance = value[6] - value[5];
    distance = distance*(distance > 0) - distance*(distance < 0);
    if (distance <= value[0]) //fare = b
        fare = value[1];
    else if (distance <= value[2] + value[0])
        fare = value[1] + (distance - value[0]) * value[3]; //b+(dist-a)*d
    else if (distance > value[2] + value[0])
        fare = value[1] + value[2] * value[3] + (distance - value[0] - value[2])* value[4]; //b + c * d + (distance - a - c) * e
    else
    {
        printf("Error");
        return (0);
    }
    printf("%d", fare);
    return (0);
}