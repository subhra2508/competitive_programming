#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<n-1;i++){
           sum+=abs(arr[i+1]-arr[i])-1;
		}
		cout<<sum<<endl;
	}
	return 0;
}