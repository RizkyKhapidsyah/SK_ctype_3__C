#pragma warning(disable:4996)

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();

		if (isalpha(acter)) {
			putchar(acter);
		}
	} while (acter != '\n');

	_getch();
	return(0);
}