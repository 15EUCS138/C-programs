#include <stdio.h>
 
int main()
{
  int a[20], max,n,i;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);
 max = a[0];
 for(i=0;i<n;i++)
  {
    if (a[i] > max)
    {
       max  = a[i];
    }
  }
 
  printf("Maximum value is %d.\n", max);
  return 0;
}
