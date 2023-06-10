/*
	double datatype
	%lf
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	double ip;
	clrscr();
		printf("\n Size of Double variable is %d Bytes", sizeof(ip));

		printf("\n Enter value for ip \t");
		scanf("%lf", &ip);
		printf("\n Entered value is %lf", ip);
		printf("\n Entered value is %.3lf", ip);
	getch();
}