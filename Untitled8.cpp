#include<stdio.h>
int main()
{
	int i,a[100],b[1000],n,k;
	for(i=0;i<1000;i++)
	{
		b[i]=0;
	}
	printf("\nEnter no.of elements:  ");
	scanf("%d",&n);
	printf("\nEnter the values of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	printf("Enter the target value");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(b[k-a[i]]!=0)
		{
			printf("\n%d  %d",a[i],k-a[i]);
			b[k-a[i]]=0;
			b[a[i]]=0;
		}
	}
	return 0;
}
