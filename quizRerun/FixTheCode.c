#include<stdio.h>
int main()
{
    int celsius;
    scanf("%d", &celsius);

    float fahrenheit = ((float)celsius * 9 / 5) + 32;
    
    printf("%.1f\n", fahrenheit);
    return 0;
}