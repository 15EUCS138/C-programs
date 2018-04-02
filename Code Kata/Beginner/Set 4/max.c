#include<stdio.h>

int main(void) {
  int a[10],i,max;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<10;i++)
  {
    if(max<a[i])
    max=a[i];
  }
  printf("The maximum element in an array:%d",max);
  
  return 0;
}
