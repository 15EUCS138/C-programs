#include <stdio.h>

int main(void) {
	int a=0,b=1,c,n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Fibbonacci series:");
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
	}
	return 0;
}
