#include <stdio.h>
 
int main()
{
    int sp_found = 0;
    char name[201];
 
    scanf("%[^\n]", name);
    printf("%c.", name[0]);
    for (int i=0; name[i]; i++) {
        if (sp_found) {
            printf("%c", name[i]);
            break;
        }
        if (name[i] == ' ') sp_found = 1;
    }
    printf(".");
}