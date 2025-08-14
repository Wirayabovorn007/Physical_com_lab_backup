#include <stdio.h>

int main(){
	int	n;

	scanf("%d", &n);
	if (n==0 || n == 1) return 1;
	int a, b, c;
	a=1;
	b=1;
	for (int i=2; i<=n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	printf("method = %d", b);
}