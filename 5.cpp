#include <iostream>
#include <stdio.h>
using namespace std;
void qsort(int A[],int m,int n)
{
    int x=A[(n+m)/2];
    int i=m;
    int j=n;
    while (i<=j)
    {
        while (A[i]<x)
            i++;
        while (A[j]>x)
            j--;
        if(i<=j)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }
    }
    if (j>m)
        qsort (A,m,j);
    if (i<n)
        qsort (A,i,n);
}
int main()
{
    int w,n,w1,c1;
    int s=0;
    printf("enter containment weight\n");
    scanf("%d",&w);
    printf("enter number of things\n");
    scanf("%d",&n);
    int b[n];
    for (int k=1;k<=n;k++)
    {
        printf("enter price of thing %d:\n",k);
        scanf("%d",&c1);
        printf("enter weight of thing %d:\n",k);
        scanf("%d",&w1);
        b[k]=(c1/w1);
    }
    for (int i=1;i<=n;i++)
    {
        printf("%du = %d\n",i,b[i]);
    }
    qsort(b,1,n);
    for (int g=1;g<=n;g++)
    {
        printf(" after sort: %du = %d\n",g,b[g]);
    }
    for (int j=n;j>=1;j--)
    {
        while (w)
        {
            w=w-b[j];
            s++;
        }
    }
    printf (" the amount of things he can carry = %d", s);
    return 0;
}
