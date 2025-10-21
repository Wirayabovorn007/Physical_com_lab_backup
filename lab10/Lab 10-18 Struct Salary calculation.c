typedef struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
} Rec;
 
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    int n, t;
    char search[10];
    scanf("%d", &n);
    Rec info[n];
    t = n;
    while (t--) scanf("%s %s %ld %ld", info[t].id, info[t].name, &info[t].salary, &info[t].sales);
    scanf(" %s", search);
    while (n--)
    {
        if (strcmp(info[n].id, search) == 0){
            printf("%s\n%s\n%.ld\n%.2lf\n%.ld\n%.2lf", info[n].id, info[n].name, info[n].sales, (double)(((double)info[n].sales) * 0.02), info[n].salary, (double)((double)info[n].sales * 0.02 + (double)info[n].salary));
            return 0;
        }
    }
    printf("ID not found !!!");
}