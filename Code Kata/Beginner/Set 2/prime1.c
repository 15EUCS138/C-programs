#include<stdio.h>
int main(void)
{
int a,b,i,j,flag;
scanf("%d%d",&a,&b);
printf("Prime Numbers:\t");
for(i=a;i<=b;i++)
{
if(i==2)
{
printf("%d\t",i);
}
else
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=0;
break;
}
else
{
flag=1;
}
}
if(flag==1)
{
printf("%d\t",i);
}
}
}
}

