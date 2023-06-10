#include<conio.h>
#include<stdio.h>

/*
	find maximum out of two numbers with use of ternary operator
	ans = (condition ? true part : false part)
*/

void main()
{
	int ip1, ip2, ans;
	clrscr();
		printf("\n Enter value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter value for ip2 \t");
		scanf("%d", &ip2);

		ans = (ip1 > ip2 ? ip1 : ip2);
		printf("\n maximum is %d", ans);
	getch();
}