#include <stdio.h>

char make_it_upper(char c);
char make_it_lower(char c);
int is_it_lower(char c);
int is_it_upper(char c);
int string_compare(char *s1, char *s2);

int main(){
	char s1[102], s2[102];
	scanf(" %[^\n]", s1);
	scanf(" %[^\n]", s2);

	printf("*** Results ***\n");
	for (int i=0; s1[i]; i++){
		if (s1[i] == ' '){
			printf(" ");
			continue;
		}
		if (is_it_lower(s1[i])) printf("%c", make_it_upper(s1[i]));
		else printf("%c", make_it_lower(s1[i]));
		s1[i] = make_it_lower(s1[i]);
	}
	printf("\n");
	for (int i=0; s2[i]; i++){
		if (s2[i] == ' '){
			printf(" ");
			continue;
		}
		if (is_it_lower(s2[i])) printf("%c", make_it_upper(s2[i]));
		else printf("%c", make_it_lower(s2[i]));
		s2[i] = make_it_lower(s2[i]);
	}
	printf("\n***************\n");
	if (string_compare(s1, s2) == 0) printf("Both strings are the same.");
	else printf("Both strings are not the same.");
}

int string_compare(char *s1, char *s2)
{
	int i=0;
	while (s1[i] && s2[i]){
		if (s1[i] != s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int is_it_lower(char c){
	return (c >= 'a' && c<='z');
}
int is_it_upper(char c){
	return (c >= 'A' && c<='Z');
}

char make_it_upper(char c){
	if (is_it_lower(c)) return c -= 32;
	return c;
}
char make_it_lower(char c){
	if (is_it_upper(c)) return c += 32;
	return c;
}