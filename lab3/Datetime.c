#include <stdio.h>

int main(){
    long seconds;
    scanf("%ld", &seconds);
    long ss = seconds;

    int d = seconds / (24 * 3600);
    seconds %= (24 * 3600);
    int h = seconds / 3600;
    seconds %= 3600;
    int m = seconds / 60;
    seconds %= 60;

    printf("%ld s = %d d %d h %d m %d s", ss, d, h, m, seconds);
}