#include <stdio.h>
int main(void) {
	int n,sum=0,num,rem;
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num/=10;
		
	}
	if(sum==n)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
