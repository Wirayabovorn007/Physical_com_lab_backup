#include "stdio.h"

int main() {
    int a = 17, b = 25, c = 50, d = 10;

    //Before
    printf("Before: a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    printf("-------\n");
    //After

    //Expression here
    a += ++a;

    printf("After: a = %d, b = %d, c = %d, d = %d", a,b,c,d);
    return 0;
}