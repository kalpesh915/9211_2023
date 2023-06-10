/*
	int is used for whole numbers like 12, 34, 33, 22
	float is used for floating point numbers 33.44, 23.22, 22.55
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	float ip;
	clrscr();
		printf("\n Enter value for ip \t");
		scanf("%f", &ip);
		printf("\n value of ip is %f", ip);
	getch();
}