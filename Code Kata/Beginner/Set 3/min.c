#include<stdio.h>

int main(void) {
  int a[10],i,n,min;
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=1;i<n;i++)
  {
    if(min>a[i])
    min=a[i];
  }
  printf("The minimum element in an array:%d",min);
  
  return 0;
}
