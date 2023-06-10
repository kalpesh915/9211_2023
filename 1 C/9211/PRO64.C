#include<conio.h>
#include<stdio.h>

/*
	get character from keyboard
*/

void main()
{
	char c;
	clrscr();
		printf("\n Press any character \t");
		//c = getch();
		c = getche();

		printf("\n you entered %c", c);
	getch();
}