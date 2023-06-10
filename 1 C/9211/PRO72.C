#include<conio.h>
#include<stdio.h>

// local scope

void main()
{
	int ip = 10;
	clrscr();
		printf("\n value of ip is %d", ip);

		{
			int ip = 100;
			printf("\n value of ip is %d", ip);
		}

		{
			int ip = 1000;
			printf("\n value of ip is %d", ip);
		}

		printf("\n value of ip is %d", ip);
	getch();
}