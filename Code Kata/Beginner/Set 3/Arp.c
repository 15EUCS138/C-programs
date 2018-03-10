#include <stdio.h>

int main(void) {
	int n,diff,fir,i,sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	printf("Enter the difference and first term:");
	scanf("%d%d",&diff,&fir);
	for(i=0;i<n;i++)
	{
		sum=sum+fir;
		fir=fir+diff;
	}
	printf("sum:%d",sum);
	return 0;
}
