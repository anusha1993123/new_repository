#include<stdio.h>
void main()
{
	int num,pos;

	printf("enter a number:\n");
	scanf("%d",&num);

	printf("enter the position:\n");
	scanf("%d",&pos);

	num=num&(~(0x01<<pos));

	printf("%d\n",num);
}

