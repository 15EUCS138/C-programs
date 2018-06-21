#include <stdio.h>

int main(void) {
	int a[10],n,i,min,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
		min=a[i];
		}
		else
		{
		max=a[i];
		}
	
	}
		printf("min:%d max:%d",min,max);
	
	return 0;
}
