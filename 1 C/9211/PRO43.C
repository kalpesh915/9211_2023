#include<conio.h>
#include<stdio.h>

void main()
{
	const int x = 10;
	clrscr();
		printf("\n value of x is %d",x);
		x = 20; // error constant cannot modify
		printf("\n value of x is %d",x);
	getch();
}