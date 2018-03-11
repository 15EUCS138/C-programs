#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("Enter the numbers:");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("After swapping:%d %d",a,b);
}
