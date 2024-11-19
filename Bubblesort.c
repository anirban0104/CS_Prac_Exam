#include <stdio.h>
int main()
{
    int a[20],n,temp,k,i,j,p;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter elements");
    scanf("%d",&a[i]);
    }
    for(p=0;p<n-1;p++)
    {
    for(k=0;k<n-1;k++)
    {
    if(a[k]>a[k+1])
    {
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
    }
    }
    }
    for(int j=0;j<n;j++)
    {
    printf("%d\t",a[j]);
    }
    return 0;
    }
    