/*
	arithmatic operations
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int ip1, ip2, sum;
	clrscr();
		printf("\n Enter any value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter any value for ip2 \t");
		scanf("%d", &ip2);

		printf("\n Sum is %d", ip1 + ip2);
		printf("\n Sub is %d", ip1 - ip2);
		printf("\n Mul is %d", ip1 * ip2);
		printf("\n Div is %d", ip1 / ip2);
		printf("\n Mod is %d", ip1 % ip2);
	getch();
}