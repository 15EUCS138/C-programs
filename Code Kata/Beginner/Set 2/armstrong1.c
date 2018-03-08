#include<stdio.h>
int main()
{
    int n,i,sum,rem,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==i)
    {
    printf("%d\t",i);
    }
    }
}
