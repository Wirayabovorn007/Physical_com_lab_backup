#include <stdio.h>
#include <string.h>

void *reverse_str(char *str, int len){
    int i = 0;
    char temp;
    while (i < (int)len/2){
        temp = str[i];
        str[i] = str[len - 1 -i];
        str[len - 1 -i] = temp;
        i++;
    }
}

int str_cmp(char *s1, char *s2){
    int i = 0;
    while (s1[i] && s2[i]){
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return s1[i] == s2[i];
}

int main(){
    char str[101], reversed[101];
    scanf("%s", str);
    int len = strlen(str);
    strcpy(reversed, str);
    reverse_str(reversed, len);
    if (str_cmp(str, reversed)) printf("It is Palindrome.");
    else printf("It is not Palindrome.");
}