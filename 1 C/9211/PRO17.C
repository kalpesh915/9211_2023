/*
	make sum of entered value
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
		sum = ip1 + ip2;
		printf("\n Sum is %d", sum);
	getch();
}