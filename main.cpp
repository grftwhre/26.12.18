#include <iostream>
#include <stdio.h>
using namespace std;
int minimal(a[],n)
{
    int m=a[1];
    for(int i=0;i<n;++i)
    {
     if(a[i]<m)
        m=a[i];
    }
return m;
}
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

 int price[n];
 int weight[n];
 int A[n][n];
  for (int i=1;i<=n;i++)
    {
        printf("weight %d = \n",i);
        scanf("%d",&weight[i]);
        printf("price %d = \n",i);
        scanf("%d",&price[i]);
    }
  for (int k=1;k<=n;k++)
  {
      for (int l=1;l<=n;l++)
        A[k][l]=0;
  }

    return 0;
}
