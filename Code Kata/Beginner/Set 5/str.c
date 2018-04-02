#include <stdio.h>

int main(void) {
	int n,i;
	char str[10];
	scanf("%d",&n);
	scanf("%s", str);
	for(i=0;i<n;i++)
	{
		printf("%s\n",str);
	}
	return 0;
}
