#include <stdio.h>
#include <ctype.h>
#include <string.h>

void correctNameFormat(char *str);
void selectionSort(char arr[][61], int n);

int main(){
	int n;
	scanf("%d", &n);
	char std[n][61];
	for (int i=0; i<n; i++) {
		scanf(" %[^\n]", std[i]);
		correctNameFormat(std[i]);
	}
	selectionSort(std, n);
	for (int i=0; i<n;i++) {
		printf("%s", std[i]);
		if (i <n - 1) printf("\n");
	}
}

void correctNameFormat(char *str)
{
	int isHead = 1;
	for (int i=0; str[i]; i++){
		if (str[i] == ' ')
		{
			isHead = 1;
			continue;
		}
		if (isHead){
			str[i] = toupper(str[i]);
			isHead = 0;
		}else{
			str[i] = tolower(str[i]);
		}
	}
}

void selectionSort(char arr[][61], int n)
{
	for (int i=0; i<n; i++){
		int min_ind = i;
		for (int j = i+1; j<n; j++){
			if (strcmp(arr[j], arr[min_ind]) < 0){
				min_ind = j;
			}
		}
		if (min_ind != i){
			char temp[61];
			strcpy(temp, arr[i]);
			strcpy(arr[i], arr[min_ind]);
			strcpy(arr[min_ind], temp);
		}
	}
}