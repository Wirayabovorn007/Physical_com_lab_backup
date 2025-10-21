struct Book {
    char id[10];
    char name[100];
    char author[100];
};
 
 
 
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char search[10];
 
    scanf("%d", &n);
    struct Book book[n];
    scanf(" %s", search);
    for (int i=0; i< n; i++)   
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
 
    for (int i = 0; i< n; i++) {
        if (strcmp(search, book[i].id) == 0){
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            return 0;
        }
    }
    printf("Not Found");
}