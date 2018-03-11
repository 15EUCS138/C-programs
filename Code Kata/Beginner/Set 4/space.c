#include <stdio.h>

int main(void) {
	char s[100];
	int space=0,i;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i] != '\0';i++)
	{
	if(s[i] == ' ' || s[i] =='\n' || s[i] == '\t')
            space++;
	}
	
	printf("Number of spaces in a given line: %d",space);
	return 0;
}
