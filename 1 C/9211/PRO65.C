#include<conio.h>
#include<stdio.h>

/*
	swap values without use of third variable
	ip1 = 10                        ip1	ip2
	ip2 = 20                        10	20

	ip1 = ip1 + ip2                 30	20
	ip2 = ip1 - ip2			30	10
	ip1 = ip1 - ip2			20	10
*/

void main()
{
	int ip1, ip2;
	clrscr();
		printf("\n Enter value for ip1 \t");
		scanf("%d", &ip1);
		printf("\n Enter value for ip2 \t");
		scanf("%d", &ip2);

		printf("\n Before swap ip1 is %d and ip2 is %d", ip1, ip2);
		ip1 = ip1 + ip2;
		ip2 = ip1 - ip2;
		ip1 = ip1 - ip2;
		printf("\n After swap ip1 is %d and ip2 is %d", ip1, ip2);
	getch();
}