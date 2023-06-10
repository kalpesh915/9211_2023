/*
	Simple Interest
*/
#include<conio.h>
#include<stdio.h>

void main()
{
	long int principle;
	float rate, interest;
	int year;
	clrscr();
		printf("\n Enter Principal Amount \t");
		scanf("%ld", &principle);
		printf("\n Enter Rate of Interesr \t");
		scanf("%f", &rate);
		printf("\n Enter number of years \t");
		scanf("%d", &year);

		interest = (principle * rate * year) / 100;
		printf("\n Interest is %f", interest);
	getch();
}