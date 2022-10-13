#include<iostream>
using namespace std;
bool ispossible(int arr[], int m,int n,int mid){
    int stucount=1;
    int pagecount =0;
    for (int i = 0; i < n; i++)
    {
        
        if ((pagecount+arr[i])<=mid)
        {
            pagecount+=arr[i];
        }
        else{
            stucount++;
            if (stucount>m || arr[i]>mid)
            {
                return false;
            }
            pagecount=arr[i];
        }
    }
    return true;
}
int findallocation(int arr[],int n,int m){
    int s=0,sum=0;
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
       sum+=arr[i]; 
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(ispossible(arr, m,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
 int arr[4]={12,34,67,90};
 int a=findallocation(arr,4,2);
 cout<<a<<endl;
return 0;
}