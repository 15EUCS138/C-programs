#include <stdio.h>

int main(void) {
	int a=0,b=1,c,n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\n%d %d",a,b); 
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}
	return 0;
}
