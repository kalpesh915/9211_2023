#include<conio.h>
#include<stdio.h>

// type casting

void main()
{
	int ip1, ip2;
	float ans;
	clrscr();
		printf("\n Enter value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter value for ip2 \t");
		scanf("%d", &ip2);

		ans = (float) ip1 / ip2;
		printf("\n division is %f", ans);
	getch();
}