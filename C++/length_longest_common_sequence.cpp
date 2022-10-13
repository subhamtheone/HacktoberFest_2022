#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
		  ll n,m,k,count=0;
		  cin>>n>>m>>k;
		  ll a[n];
		  for(ll i=0;i<n;i++){
			cin>>a[i];
			if(a[i]!=k){
                count++;
			}
		  }	 
		  int i,j;
		  bool f=1;
		  for(i=0;i<k;i++){
			for(j=0;j<n;j++){
				if(i==a[j]){
					break;
				}	 
			}
			if(j==n){
				f=0;
				break;
			}
		  } 

		  if(f==1){
		     if(count<m || m<k){
			    f=0;
		     }
		  }

          if(f==1){
			cout<<"YES\n";
		  }
		  else{
			cout<<"NO\n";
		  }
	} 
	
}