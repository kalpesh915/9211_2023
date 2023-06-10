/*
	get single character from user and print ASCII of entered character
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	char c;
	clrscr();
		printf("\n Enter any character \t");
		scanf("%c", &c);
		printf("\n Character is %c and ASCII is %d", c, c);
	getch();
}