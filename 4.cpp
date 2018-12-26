#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x,n;
     printf("enter x\n");
     scanf("%d",&x);
      printf("enter n\n");
      scanf("%d",&n);
    int a[n];
    int b[n];
      for (int k=1;k<=n;k++)
       scanf("%d",&a[k]);
     b[0]=a[n-1];
      for(int i=1;i<n;i++)
        b[i]=(b[i-1]*x) + a[n-i-1];
    printf("P[x]=%d",b[n-1]);
    return 0;
}
