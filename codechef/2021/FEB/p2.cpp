#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		ll max_val=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		 sort(arr,arr+n);
		 ll x=arr[0];
		 ll y=arr[1];
		 ll z=arr[n-1];
		 max_val=abs(x-y)+abs(y-z)+abs(z-x);
		cout<<max_val<<endl;
	}
	return 0;
}