#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int kth(int a[],int k,int l,int r)
{
    int x=a[(l+r)/2];
    int i=l;
    int j=r;
    while (i<=j)
    {
        while (a[i]<x)
        i++;
        while (a[j]>x)
        j--;
        if (i<=j)
         {
           swap(a[i],a[j]);
           i++;
           j--;
         }
    }
if ((k>=l)&&(k<=j))
{
    return kth(a,k,l,j);
}
if ((k>=i)&&(k<=r))
{
    return kth(a,k,i,r);
}
return a[k];
}
int main()
{
    int k,n;
    printf("enter n\n");
    scanf("%d",&n);
    int a[n];
    for (int i=1;i<=n;i++)
    {
        a[i]= rand()&1000;
        printf("%d\n",a[i]);
    }
    printf("enter k\n");
    scanf("%d",&k);
    printf("%d",kth(a,k,1,n));
    return 0;
}
