#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[101];
 
    scanf("%s", str);
    int changed = 1;
 
    while (changed)
    {
        changed = 0;
        char temp[101];
        int i=0, j = 0;
 
        while (str[i])
        {
            if (str[i] == str[i + 1]){
                changed = 1;
                char ch = str[i];
                while (str[i] == ch) i++;
            }
            else
            {
                temp[j++] = str[i++];
            }
        }
        temp[j] = '\0';
        if (changed){
            printf("%s\n", temp);
            strcpy(str, temp);
        }
    }
     
}