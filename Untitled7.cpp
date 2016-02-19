#include<stdio.h>
int main()
{
	int i,a[100],b[1000],n;
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
	for(i=0;i<n;i++)
	{
		if(b[a[i]]>1) 
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
