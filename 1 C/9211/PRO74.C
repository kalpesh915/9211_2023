#include<conio.h>
#include<stdio.h>

// global scope

int ip = 112;

void main()
{
	clrscr();
		printf("\n value of ip is %d", ip);

		{
			printf("\n value of ip is %d", ip);
		}

		{
			printf("\n value of ip is %d", ip);
		}

		printf("\n value of ip is %d", ip);
	getch();
}