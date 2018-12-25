#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,s,d;
    printf("enter size of mass\n");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
     scanf("%d",&a[i]);
    for (int k=0;k<n;k++)
      printf("a[%d]=%d\n",k,a[k]);
    d=0;
    for (int m=0;m<n;m++)
    {
        s=0;
        for (int l=0;l<n;l++)
        {
            if (a[m]==a[l])
             s++;
            if (s>(n/2))
             d=a[m];
        }
    }
    if (d!=0)
    printf("%d\n",d);
    else
    printf("NO");
    return 0;
}
