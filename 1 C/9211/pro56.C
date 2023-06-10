#include<conio.h>
#include<stdio.h>

void main()
{
	int ip;
	clrscr();
		ip = 10;
		printf("\n value of ip is %d", ip);
		ip = ip + 10;
		printf("\n value of ip is %d", ip);

		ip += 10;
		printf("\n value of ip is %d", ip);
		ip -= 10;
		printf("\n value of ip is %d", ip);
		ip *= 10;
		printf("\n value of ip is %d", ip);
		ip /= 10;
		printf("\n value of ip is %d", ip);
		ip %= 10;
		printf("\n value of ip is %d", ip);
	getch();
}