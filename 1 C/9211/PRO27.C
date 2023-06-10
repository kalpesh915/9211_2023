/*
	type	:	short unsigned int
	bytes	:	2
	bits	:	16
	use	:	16
	signbit	:	0
	range	:	2 ^ 16
	format	:	%u

*/
#include<conio.h>
#include<stdio.h>

void main()
{
	//int ip;
	short unsigned int ip;
	clrscr();
		printf("\n Size of short signed int is %d Bytes", sizeof(ip));
		printf("\n Enter value for ip \t");
		scanf("%u", &ip);
		printf("\n value of ip is %u", ip);
	getch();
}