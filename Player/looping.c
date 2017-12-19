#include<stdio.h>
#include<math.h>
int main()
{
	int a,aa=0,aaa=0,aaaa=0,sum,i;
	printf("enter the value:");
	scanf("%d",&a);
	for(i=0;i<2;i++)
	{
	aa=aa+a*pow(10,i);
	}
	for(i=0;i<3;i++)
	{
	aaa=aaa+a*pow(10,i);
	}
	for(i=0;i<4;i++)
	{
	aaaa=aaaa+a*pow(10,i);
	}
	sum=a+aa+aaa+aaaa;
	printf("%d",sum);
}
