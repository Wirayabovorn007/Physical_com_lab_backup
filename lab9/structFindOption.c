
typedef struct student_info {
    char firstname[61];
    char lastname[61];
    char gender[5];
    int age;
    char id[13];
    float gpa;
} std_i;


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortbyfirstname(std_i std[20])
{
    std_i temp;
    for (int i=0; i<20; i++)
    {
        int min_ind = i;
        for (int j = i+1; j<20; j++)
            if (strcmp(std[min_ind].firstname, std[j].firstname) > 0)
                min_ind = j;
        if (min_ind != i){
            temp = std[i];
            std[i] = std[min_ind];
            std[min_ind] = temp;
        }
    }
}


void sortbylastname(std_i std[20])
{
    std_i temp;
    for (int i=0; i<20; i++)
    {
        int min_ind = i;
        for (int j = i+1; j<20; j++)
            if (strcmp(std[min_ind].lastname, std[j].lastname) > 0)
                min_ind = j;
        if (min_ind != i){
            temp = std[i];
            std[i] = std[min_ind];
            std[min_ind] = temp;
        }
    }
}

void sortbyid(std_i std[20])
{
    std_i temp;
    for (int i=0; i<20; i++)
    {
        int min_ind = i;
        for (int j = i+1; j<20; j++)
            if (strcmp(std[min_ind].id, std[j].id) > 0)
                min_ind = j;
        if (min_ind != i){
            temp = std[i];
            std[i] = std[min_ind];
            std[min_ind] = temp;
        }
    }
}


int main()
{
    std_i std[20];
    char gender_t[10], option[8];

    for (int i=0; i<20; i++)
    {
        scanf("%s %s %s %d %s %f", std[i].firstname, std[i].lastname, gender_t, &std[i].age, std[i].id, &std[i].gpa);
        (toupper(gender_t[0]) == 'M')? strcpy(std[i].gender, "Mr"):strcpy(std[i].gender, "Miss");
    }

    scanf(" %s", option);
    if (tolower(option[0]) == 'n') sortbyfirstname(std);
    if (tolower(option[0]) == 's') sortbylastname(std);
    if (tolower(option[0]) == 'i') sortbyid(std);
    for (int i=0; i<20; i++) {
        printf("%s %c %s (%d) ID: %s GPA %.2f", std[i].gender, std[i].firstname[0], std[i].lastname, std[i].age, std[i].id,std[i].gpa);
        if (i < 19) printf("\n");
    }
}