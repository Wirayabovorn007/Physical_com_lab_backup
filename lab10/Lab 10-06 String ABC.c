#include <stdio.h>
#include <string.h>
 
void selection_sort(char *s)
{
    for (int i=0; i<strlen(s); i++)
    {
        int min_ind = i;
        for (int j= i+ 1; j<strlen(s); j++)
            if (s[j] < s[min_ind])
                min_ind = j;
        if (min_ind != i)
        {
            char temp = s[i];
            s[i] = s[min_ind];
            s[min_ind] = temp;
        }
    }
}
 
int main()
{
    char str[201];
    scanf("%[^\n]", str);
    selection_sort(str);
    for (int i=0; i< strlen(str); i++) printf("%c", str[i]);
}