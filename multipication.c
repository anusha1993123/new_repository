#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf("enter a,b values:\n");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++)
	{
//		c=0;
		c+=a;
	}
	printf("multiplication:%d\n",c);
}
