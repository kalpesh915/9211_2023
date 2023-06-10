/*
	decimal constant
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int ip, ip1, ip2;
	clrscr();
		ip = 10;
		ip1 = 010; // octal
		ip2 = 0x12; // hex

		printf("\n value of ip is %d", ip);
		printf("\n value of ip1 is %d", ip1);
		printf("\n value of ip2 is %d", ip2);
	getch();
}