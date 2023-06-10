/*
	scanf() function is used to get values from user
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int ip;
	clrscr();
		printf("\n Enter any value for ip \t");
		scanf("%d", &ip);
		printf("\n You Entered %d", ip);
	getch();
}