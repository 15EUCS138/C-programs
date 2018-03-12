#include <stdio.h>

int main(void) {
	char s[100];
	int count=0,i;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i] != '\0';i++)
	{
	if(s[i]>='0'&&s[i]<='9')
	count++;
	}
	printf("Number of numeric characters: %d",count);
	return 0;
}
