#include<conio.h>
#include<stdio.h>

/*
	artitmatic operators
*/

void main()
{
	int i, j;

	clrscr();
		i = 10;
		j = 3;

		printf("\n Sum is %d", i + j);
		printf("\n Sub is %d", i - j);
		printf("\n Mul is %d", i * j);
		printf("\n Div is %d", i / j);
		printf("\n Mod is %d", i % j);

	getch();
}