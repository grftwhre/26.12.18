#include <iostream>
#include <stdio.h>
using namespace std;

int member (int a[],int n,int x)
{
    int l,i,r;
    l=0;
    r=n-1;
while (true)
{
    i=(l+r)/2;
    if (a[i]<x)
    l=i+1;
    if (a[i]>x)
    r=i-1;
    if (a[i]==x)
    return 1;
}
}
int main()
{
    int n,x,y;
    printf ("enter size of mass\n");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int k=0;k<n;k++)
        printf("a[%d]=%d\n",k,a[k]);

    printf("enter x\n");
    scanf("%d",&x);
    printf("enter y\n");
    scanf("%d",&y);
    if ((member(a,n,x)==1)&&(member(a,n,y)==1))
        printf("yes");
    else
        printf("no");
    return 0;
}
