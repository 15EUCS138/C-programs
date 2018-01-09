#include<stdio.h>
int main()
{
int rev=0,temp,n,rem;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
}
if(temp==rev)
printf("palindrome");
else
printf("not a palindrome");

return 0;
}
