#include <stdio.h>


int main()
{
    char name[31];
    char lastname[31];
    char id[9];
    char dob[11];
    float gpa;
    char temp;
    int q = 1;

    scanf("%s", name);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%s", dob);
    scanf("%f", &gpa);

    int day, month, year;
    sscanf(dob, "%d/%d/%d", &day, &month, &year);

    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%02d\n", day, month, year);
    printf("GPA: %.2f", gpa);
}