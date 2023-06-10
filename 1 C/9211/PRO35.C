/*
	char data type
	%c
	store 1 byte
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	char c;
	clrscr();
		printf("\n Size of Character variable is %d Bytes", sizeof(c));

		printf("\n Enter any character \t");
		c = getch();
		printf("\n you entered %c", c);

	getch();
}