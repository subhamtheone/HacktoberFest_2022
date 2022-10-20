#include<stdio.h>
#include<conio.h>
#include<limits.h>
#define MAX(x,y) (((x)>(y))?(x):(y))
const int INF=100000;
int bottom_up_rod_cutting(int a[],int n)
{
    int r[n+1];
    r[0]=0;
    int i,j;
    for(i=1;i<=n;i++)
    {
        int maximum_revenue=-1*INF;
        for(j=1;j<=i;j++)
        {
            maximum_revenue=MAX(maximum_revenue,a[j]+r[i-j]);
        }
        r[i]=maximum_revenue;
    }
    return r[n];
}
int main()
{
    int a[]={0,1,5,8,9,10,17,17,20,24,30,12};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d\n",bottom_up_rod_cutting(a,n));
    getch();
    return 0;
}
