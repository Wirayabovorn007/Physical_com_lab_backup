#include <stdio.h>
#include <string.h>
#include <ctype.h>
  
  
int main()
{
    char s[2001];
  
    scanf("%[^\n]", s);
    for (int i=0; s[i]; i++) if (s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
     
    char *ptr = s;
    int f = 1;
    while (ptr = strstr(ptr, "cat")) {
        if (!f) printf(", ");
        printf("%d", (int)(ptr - s));
        f = 0;
        ptr+=3;
    }
}