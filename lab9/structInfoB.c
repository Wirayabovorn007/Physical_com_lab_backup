typedef struct student_info {
    char firstname[61];
    char lastname[61];
    char gender[7];
    int age;
    char id[13];
    float gpa;
} std_i;

#include <stdio.h>
int main(){
    std_i std;

    scanf("%s %s %s %d %s %f", std.firstname, std.lastname, std.gender, &std.age, std.id, &std.gpa);

    (std.gender[0] == 'M')? printf("Mr "):printf("Miss ");
    printf("%c %s (%d) ID: %s GPA %.2f", std.firstname[0], std.lastname, std.age, std.id,std.gpa);
}