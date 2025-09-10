#include <stdio.h>


typedef struct counter{
    int c;
    int w;
    int l;
} cn;

int count_word(char *s)
{
    int is_w = 0;
    int count = 0;
    int i=-1;
    while (s[++i])
    {
        if (s[i] == ' ' || s[i] == '\n') is_w = 0;
        else if (!is_w)
        {
            is_w = 1;
            count++;
        }
    }
    return (count);
}
 

int main()
{
    cn count;
    count.c = 0;
    count.l = 0;
    char str[451];
    scanf(" %[^.]", str);

    count.w = count_word(str);
    for (int i=0; str[i]; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '.') count.c++;
        if (str[i] == '\n') count.l++;
    }
    printf("Char = %d, word = %d, line = %d", count.c, count.w, count.l);
}