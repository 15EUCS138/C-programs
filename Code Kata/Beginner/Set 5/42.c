#include <stdio.h>
#include<string.h>

int main(void) {
	int l1,l2,i,sum1,sum2;
	char a[20],b[20];
	scanf("%s%s",a,b);
	sum1=0;
	sum2=0;
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		sum1=sum1+a[i];
	}
	for(i=0;i<l2;i++)
	{
		sum2=sum2+b[i];
	}
	if(sum1>sum2)
	{
		printf("%s",a);
	}
	else if(sum1<sum2)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
	
	return 0;
}
