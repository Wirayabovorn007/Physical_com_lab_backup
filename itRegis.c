#include <stdio.h>

int main()
{
    char name[30];
    char lastname[30];
    char id[8];
    char dob[10];
    char gpa[4];

    scanf("%s\n", name);
    scanf("%s\n", lastname);
    scanf("%s\n", id);
    scanf("%s\n", dob);
    scanf("%s", gpa);


    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: ");
    for (int i = 0; id[i]; i++){
        if (id[i] == '/'){
            printf("-");
            continue ;
        }
        printf("%c", id[i]);
    }
    printf("\n");
    printf("GPA: %s", gpa);
}