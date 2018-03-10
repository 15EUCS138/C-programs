#include <stdio.h>

int main(void) {
	char n;
	scanf("%s",&n);
	if(n>=65&&n>=90||n>=97&&n<=122)
	{
		printf("No");
		
	}
	else
	{
		printf("Yes");
	}
	return 0;
}
