#include <stdio.h>
#include <stdlib.h>

int len(char *str){
    int i = -1;
    while(str[++i])
        i++;
    return (i);
}

int main()
{
    char name[31];
    char lastname[31];
    char id[9];
    char dob[11];
    char gpa[5];

    
    scanf("%s", name);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%s", dob);
    scanf("%s", gpa);
    
    float f_gpa = atof(gpa);
    char *day = strtok(dob, "/");
    char *month = strtok(NULL, "/");
    char *year = strtok(NULL, "/");

    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: ");
    if (len(day) < 2)
        printf("0");
    printf("%s-%s-%s\n", day, month, year);
    printf("GPA: %.2f", f_gpa);
}