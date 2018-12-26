#include <iostream>
#include <stdio.h>
using namespace std;
int func(double x)
{
    return x*x-5*x+4;
}
int searchb(double arr[],int l,int r)
{
    int x=arr[(l+r)/2];
    if (func(x)>0)
        r=x+1;
    if (func(x)<0)
        l=x-1;
     if (((r-l)=2)&&(fabs(func[l+1])<10^(-6)))
       return arr[l+1];
     else
       return searchb(arr,l,r);
}
int main()
{
int x1=-2;
int x2=33;
double n=fabs(x1)+fabs(x2);
double a[n];
for (double k=-x1;k<=x2;k++)
    a[k]=func(k);
searchb(a,x1,x2);
return 0;
}
