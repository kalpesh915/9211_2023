/*
	type	:	long signed int
	bytes	:	4
	bits	:	32
	use	:	31
	signbit	:	1
	range	:	2 ^ 31
	format	:	%ld

*/
#include<conio.h>
#include<stdio.h>

void main()
{
	//int ip;
	long signed int ip;
	clrscr();
		printf("\n Size of short signed int is %d Bytes", sizeof(ip));
		printf("\n Enter value for ip \t");
		scanf("%ld", &ip);
		printf("\n value of ip is %ld", ip);
	getch();
}