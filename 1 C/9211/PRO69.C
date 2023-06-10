#include<conio.h>
#include<stdio.h>

/*

*/



void main()
{
	int units, price, bill;
	clrscr();
		printf("\n Enter number of units \t");
		scanf("%d", &units);
		printf("\n Enter price per unit \t");
		scanf("%d", &price);

		bill = units * price;

		printf("\n Payable amount is %d ",bill);
	getch();
}