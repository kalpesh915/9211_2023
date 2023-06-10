#include<conio.h>
#include<stdio.h>

/*
	post increment operators
*/

void main()
{
	int i = 10, j;

	clrscr();
		printf("\n Value of i is %d", i);
		j = i++;
		printf("\n Value of i is %d and j is %d", i, j);
	getch();
}