#include<iostream>
using namespace std;
int peakvalue(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;
    }
   return s; 
}
int main(){
int arr[6]={1,4,5,3,2,1};
int a=peakvalue(arr,6);
cout<<a<<endl;
return 0;
}