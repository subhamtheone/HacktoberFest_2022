#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
int n,l,i,j,temp;
double d,max,s;
cin>>n>>l;
int a[n];
for(i=0;i<n;i++)
	cin>>a[i];
sort(a,a+n);
max=a[0];
for(i=0;i<n-1;i++)
{
	s=a[i+1]-a[i];
	if((s/2)>=max)
		max=s/2;	
}
if(max<(l-a[n-1]))
	d=l-a[n-1];
else
	d=max;
cout<<fixed<<setprecision(10)<<d;
}
