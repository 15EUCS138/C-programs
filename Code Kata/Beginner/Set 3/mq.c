#include<stdio.h>
void merge(int a[],int st,int mid,int end);
void divide(int a[],int st,int end);
int main(void)
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	divide(a,0,n-1);
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
}
void merge(int a[],int st,int mid,int end)
{
	int i, mi, k, s, t[50];
	s = st;
	i = st;
	mi = mid + 1;
	while ((s<= mid) && (mi <= end))
	{
	if (a[s]<=a[mi])
		{
		t[i]=a[s];
		s++;
		}
	else
	{
	            t[i]=a[mi];
	          	mi++;
			
	}
	i++;
	}
	if(s>mid)
	{
	for(k=mi;k<=end;k++)
	{
	          	t[i]=a[k];
	          	i++;
	}
	}
	else
	{
		for(k=s;k<=mid;k++)
		{
	          	t[i]=a[k];
	          	i++;
		}
	}
	for(k=st<=end;k++)
	{
	a[k]=t[k];
	}
}
void divide(int a[],int st,int end)
{
	int mid;
	if(st<end)
	{
		mid=(st+end)/2;
		divide(a,st,mid);
		divide(a,mid+1,end);
		merge(a,st,mid,end);
				
	}
}
