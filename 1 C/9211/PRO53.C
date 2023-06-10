#include<conio.h>
#include<stdio.h>

/*
	logical and operator
	cond.1	cond.2	ans
	1	0	0
	0	1	0
	0	0	0
	1	1	1
*/

void main()
{
	clrscr();
		printf("\n Answer is %d", (11 > 5 && 11 > 110));
		printf("\n Answer is %d", (11 > 50 && 11 > 10));
		printf("\n Answer is %d", (11 > 50 && 11 > 110));
		printf("\n Answer is %d", (11 > 5 && 11 > 10));
	getch();
}