#include<conio.h>
#include<stdio.h>

// global scope

int ip = 112;

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