#include<stdio.h>

int main(void) {
  int a[10],i,n,max;
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(max<a[i])
    max=a[i];
  }
  printf("The maximum element in an array:%d",max);
  
  return 0;
}
