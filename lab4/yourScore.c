#include <stdio.h>

int main(){
    float s;

    scanf("%f", &s);

    if (s >= 80 && s <= 100)
        printf("A");
    else if (s >= 70 && s < 80)
        printf("B");
    else if (s >= 60 && s < 70)
        printf("C");
    else if (s >= 50 && s <60)
        printf("D");
    else if (s >= 0 && s <50)
        printf("F");
    else
        printf("Out of Range");
}