#include<stdio.h>
int main()
{
int exp,base;
int ans=1;
printf("Enter the base:");
scanf("%d",&base);
printf("Enter the exponential:");
scanf("%d",&exp);
while(exp!=0)
{
ans=base*ans;
exp--;

}
printf("%d",ans);
}
