#include <stdio.h>
#include <ctype.h>

int getIndexIfCharInStr(char *str, char c){
	int i = -1;
	c = toupper(c);
	while (str[++i])
	{
		if (str[i] == c) return (i);
	}
	return -1;
}

int main(){
	char text[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
	char ans[201], txt[201];
	int ind;
	int i = 0;

	scanf("%[^\n]", txt);
	while (txt[i])
	{
		ind = getIndexIfCharInStr(text, txt[i]);
		if (ind >=0 && isalpha(txt[i])){
			ind = (ind + 5 + 26) % 26;
			ans[i] = text[ind];
			if (islower(txt[i])) ans[i] += 32;
		}else{
			ans[i] = txt[i];
		}
		i++;
	}
	ans[i] = '\0';
	printf("%s", ans);
}