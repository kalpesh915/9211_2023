/*
	float datatype
	%f
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	float ip;
	clrscr();
		printf("\n Size of Float variable is %d Bytes", sizeof(ip));

		printf("\n Enter value for ip \t");
		scanf("%f", &ip);
		printf("\n Entered value is %f", ip);
		printf("\n Entered value is %.3f", ip);
	getch();
}