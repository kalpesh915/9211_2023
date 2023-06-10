/*
	long double datatype
	%Lf
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	long double ip;
	clrscr();
		printf("\n Size of Long Double variable is %d Bytes", sizeof(ip));

		printf("\n Enter value for ip \t");
		scanf("%Lf", &ip);
		printf("\n Entered value is %Lf", ip);
		printf("\n Entered value is %.3Lf", ip);
	getch();
}