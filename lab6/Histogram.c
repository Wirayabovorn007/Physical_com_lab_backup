#include <stdio.h>
#include <ctype.h>

int isAlreadyStore(char arr[], char c, int len){
    char ch = c;
    ch = tolower(ch);
    for (int i=0; i<len; i++){
        if (tolower(arr[i]) == ch) return 1;
    }
    return 0;
}

int printIntCount(char c, char arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if (tolower(arr[i]) == tolower(c)) count++;
    }
    return count;
}

int main(){
    int n, k = 0;
    char c;

    scanf("%d", &n);
    char allChar[n+1];
    char notUNChar[n + 1];
    for (int i=0; i<n; i++){
        scanf(" %c", &c);
        if (!isAlreadyStore(allChar, c, k)) allChar[k++] = c;
        notUNChar[i] = c;
    }
    notUNChar[n] = '\0';
    allChar[k] = '\0';
    for (int j = 0; j<k; j++){
        int count = printIntCount(allChar[j], notUNChar, n);
        printf("%c: %d", tolower(allChar[j]), count);
        if (j < k - 1) printf("\n");
    }
}