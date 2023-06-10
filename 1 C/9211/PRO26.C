/*
	type	:	short signed int
	bytes	:	2
	bits	:	16
	use	:	15
	signbit	:	1
	range	:	2 ^ 15
	format	:	%d

*/
#include<conio.h>
#include<stdio.h>

void main()
{
	//int ip;
	short signed int ip;
	clrscr();
		printf("\n Size of short signed int is %d Bytes", sizeof(ip));
		printf("\n Enter value for ip \t");
		scanf("%d", &ip);
		printf("\n value of ip is %d", ip);
	getch();
}