#include <stdio.h>

int main()
{
	int book_id;

	scanf("%d", &book_id);

	int lastDigit = book_id % 10;
	int lastTwoDigit = book_id % 100;

	if (book_id < 1000)
	{
		if (lastDigit == 0 || lastDigit == 5) printf("Science");
		else if (lastDigit == 3 || lastDigit == 7) printf("Literature");
		else printf("General Collection");
	}
	else
	{
		if (lastTwoDigit % 4 == 0) printf("Reference");
		else if (lastTwoDigit == 11 || lastTwoDigit == 22 || lastTwoDigit == 33) printf("History");
		else printf("Unclassified");
	}
}