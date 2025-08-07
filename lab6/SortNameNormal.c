#include <stdio.h>
#include <string.h>
#include <ctype.h>

void   correctNameFormat(char *name){
    int isHead = 1;
    for (int i=0; name[i]; i++){
        if (name[i] == ' '){
            isHead = 1;
            continue;
        }
        if (isHead){
            name[i] = toupper(name[i]);
            isHead = 0;
        }else
            name[i] = tolower(name[i]);
    }
}

void selectionSort(char arr[][61], int n){
    
    for (int i = 0; i< n-1;i++){
        int min_ind = i;
        for (int j = i+1; j < n; j++){
            if (strcmp(arr[j], arr[min_ind])<0)
                min_ind = j;
        }
    if (min_ind != i){
        char temp[61];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min_ind]);
        strcpy(arr[min_ind], temp);
    }
    }
}

int main(){
    char arr[20][61], temp[61];
    for (int i = 0; i<20; i++){
        scanf(" %[^\n]", temp);
        correctNameFormat(temp);
        strcpy(arr[i], temp);
    }

    selectionSort(arr, 20);
    for (int i=0; i<20; i++) {
        printf("%s", arr[i]);
        if (i < 19) printf("\n");
    }
}