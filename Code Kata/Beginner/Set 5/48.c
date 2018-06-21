#include <stdio.h>

int main(void) {
	int n,a[10],i,sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
		
	}
	printf("Average%d:",avg);
	return 0;
}
