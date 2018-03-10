#include <stdio.h>
int main()
{
    int a[100];
    int n,i,j,tmp;
    scanf("%d", &n);
	printf("enter the elements in a array :\n");
    for(i=0;i<n;i++)
    {
	      scanf("%d",&a[i]);
	}

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("The sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
	printf("median element :");
	printf("%d\n",a[n/2]);
}
