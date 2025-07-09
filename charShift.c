#include <stdio.h>

int main(){
    char s1, s2, s3, s4, s5;

    scanf("%c\n", &s1);
    scanf("%c\n", &s2);
    scanf("%c\n", &s3);
    scanf("%c\n", &s4);
    scanf("%c", &s5);

    s1+=1;
    s3+=1;
    s5+=1;

    printf("%c\n", s1);
    printf("%c\n", s2);
    printf("%c\n", s3);
    printf("%c\n", s4);
    printf("%c\n", s5);

}