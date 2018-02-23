#include <stdio.h>
int main(void) {
	int i,n,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of number:%d",fact);
	return 0;
}
