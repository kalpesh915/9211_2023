/*
	int is used for whole numbers like 12, 34, 33, 22
	float is used for floating point numbers 33.44, 23.22, 22.55
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int ip1, ip2;
	float ans;
	clrscr();
		printf("\n Enter value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter value for ip2 \t");
		scanf("%d", &ip2);

		ans = (float)ip1 / ip2;
		printf("\n answer is %f", ans);
		printf("\n answer is %.2f", ans);
	getch();
}