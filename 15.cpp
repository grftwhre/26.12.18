#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
struct point
{
 int x;
 int y;
};
int range(point a,point b)
{
    int r=((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y));
    int res=sqrt(r);
    return res;
}
int main()
{
    int n;
    int m;
    printf("enter number of points\n");
    scanf("%d",&n);
    point arr[n] ={};
     for (int k=0;k<n;k++)
       {
        scanf("%d",&arr[k].x);
        scanf("%d",&arr[k].y);
       }
       m=range(arr[1],arr[2]);
      for (int i=0;i<n;i++)
       {
        printf("%d;%d\n",arr[i].x,arr[i].y);
        for (int l=0;l<n;l++)
        {
            if ((range(arr[i],arr[l])<m)&&((arr[i].x!=arr[l].x)))
            {
             if (arr[l].y!=arr[i].y)
             m=range(arr[i],arr[l]);
            }
        }
       }
    printf("min range = %d",m);
    return 0;
}
