#include <stdio.h>

int main(void) {
	char s[100];
	int count=0,i;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i] != '\0';i++)
	{
	if(s[i] == ' ')
	count++;
	}
	printf("Number of words in a given line: %d",count+1);
	return 0;
}
