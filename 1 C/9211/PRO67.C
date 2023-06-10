#include<conio.h>
#include<stdio.h>

/*
	find maximum out of three numbers with use of ternary operator
	ans = (condition ? true part : false part)
*/

void main()
{
	int ip1, ip2, ip3, ans;
	clrscr();
		printf("\n Enter value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter value for ip2 \t");
		scanf("%d", &ip2);
		printf("\n Enter value for ip3 \t");
		scanf("%d", &ip3);

		// ip1 = 111, ip2 = 222, ip3 = 33
		ans = (ip1 > ip2 ? ((ip1 > ip3 ? ip1 : ip3)) : (ip2 > ip3 ? ip2 : ip3));
		printf("\n maximum is %d", ans);
	getch();
}