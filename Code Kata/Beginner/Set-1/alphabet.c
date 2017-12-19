#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=96||ch>=98 && ch<=122)
	{
	printf("%c is a alphabet",ch);
  }
	else
  {
	printf("%c is not alphabet",ch);
	}
}
