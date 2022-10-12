#include <iostream>
using namespace std;

void WaveSort(int arr[], int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i] > arr[i+1]  && i<=n-2)
        {
            int temp=arr[i];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        if(arr[i] > arr[i-1])
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;

        }
    }
}
