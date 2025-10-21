#include <stdio.h>

int main()
{
	float rd;

	scanf("%f", &rd);
	if (rd>=1.000 && rd<=48.697)
		printf("Ayutthaya");
	
	else if (rd<=66.456)
		printf("Ang Thong");
	
	else if (rd<=84.918)
		printf("Sing Buri");
	
	else if (rd<=85.900)
		printf("Lop Buri");
	
		else if (rd<=111.936)
		printf("Sing Buri");
	
	else if (rd<=150.019)
		printf("Chai Nat");
	
	else if (rd<=150.545)
		printf("Nakhon Sawan");
	else
		printf("InValid");
	
}