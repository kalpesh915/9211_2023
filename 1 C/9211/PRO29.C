/*
	type	:	long unsigned int
	bytes	:	4
	bits	:	32
	use	:	32
	signbit	:	0
	range	:	2 ^ 32
	format	:	%lu

*/
#include<conio.h>
#include<stdio.h>

void main()
{
	//int ip;
	long unsigned int ip;
	clrscr();
		printf("\n Size of short signed int is %d Bytes", sizeof(ip));
		printf("\n Enter value for ip \t");
		scanf("%lu", &ip);
		printf("\n value of ip is %lu", ip);
	getch();
}