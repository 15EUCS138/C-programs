#include <stdio.h>
int main(void) {
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			printf("even numbers :%d",i);
		}
	}
return 0;
}
