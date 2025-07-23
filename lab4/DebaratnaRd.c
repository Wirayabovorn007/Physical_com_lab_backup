#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);

    if (n < 0 || n > 58.855)
        printf("InValid");
    else if (n <= 5.032)
        printf("Bangkok");
    else if (n <= 35.477)
        printf("Samut Prakarn");
    else if (n <= 52.900)
        printf("Chachoengsao");
    else
        printf("Chon Buri");

    return 0;
}