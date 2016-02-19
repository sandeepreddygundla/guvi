#include<stdio.h>
int main()
{
int n,i,j;
long long int a[100000],b[100000];
printf("Enter the no.of registration numbers: ");
scanf("%d",&n);
printf("\nEnter the registration numbers:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<10000;j++)
{
b[j]=0;
}
for(i=0;i<n;i++)
{
b[a[i]]++;
if(b[a[i]]>1)
printf("\n%lld",a[i]);
}
return 0;

}
