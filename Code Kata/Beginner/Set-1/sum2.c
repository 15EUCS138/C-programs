#include <stdio.h>
int main(void) 
{
	int n,i,sum=0,k;
	printf("Enter the integer:");
	scanf("%d",&n);
	printf("Enter the k value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
	sum=sum+i;
	}
printf("sum is %d",sum);
}
