#include<iostream>
#include<conio.h>
#include<limits.h>
using namespace std;
int bottom_up_rod_cutting(int price[],int n)
{
    int value[n+1];
    value[0]=0;
    for(int j=1;j<=n;j++)
    {
        int max_value=-1000;
        for(int i=1;i<=j;i++)
        {
            max_value=max(max_value,price[i]+value[j-i]);
        }
        value[j]=max_value;
    }
    return value[n];
}
int main()
{
    int p_arr[]={0,1,5,8,9,10,17,17,20,24,30,12};
    int n=sizeof(p_arr)/sizeof(p_arr[0]);
    cout << "Maximum revenue = "<<bottom_up_rod_cutting(p_arr,n);
    getch();
}
