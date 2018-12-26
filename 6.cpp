#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
double func(double x)
{
    return 1*x*x+3*x-18;
}
double searchb (double a, double b, double e)
 {
    while(fabs(b-a)>e)
        {
        a=b-(b-a)*func(b)/(func(b)-func(a));
        b=a+(a-b)*func(a)/(func(a)-func(b));
        }
    return b;
}
int main()
{
    int x1,x2,e;
    printf("enter okrestnosty\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
     printf("enter epsylon\n");
     scanf("%d",&e);
        printf("%d",searchb(x1,x2,e));
    return 0;
}
