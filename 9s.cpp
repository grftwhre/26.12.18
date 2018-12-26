#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
 int M,N,t,maxx;
 printf("enter N\n");
 scanf("%d",&N);
 printf("enter M\n");
 scanf("%d",&M);
 int A[N][M];
  for (int k=1;k<=N;k++)
  {
      for (int i=1;i<=M;i++)
       A[k][i]=rand()&1000;
  }
  t=0;
  for (int j=1;j<=N;j++)
  {
      for (int g=1;g<=M;g++)
      {
        printf("%d",A[j][g]);
        printf("\n");
      }
  }
  for (int l=1;l<=N;l++)
  {
      for (int s=1;s<=M;s++)
      {
        maxx=max(A[l+1][s],A[l][s+1]);
        t+=maxx;
      }
  }
  printf("max = %d",t);
    return 0;
}
