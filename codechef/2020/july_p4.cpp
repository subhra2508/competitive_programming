#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n; 
		map<ll,ll>mp;
		map<ll,ll>mp1;
		ll k,l;
		ll m=(4*n)-1;
		for(ll i=0;i<m;i++){
			ll x,y;
			cin>>x>>y;
			  mp[x]++;
			  mp1[y]++;
		}
        for(auto itr=mp.begin();itr!=mp.end();itr++){
        	if(itr->second%2==1){
        		k=itr->first;
        	}
        }
        for(auto itr=mp1.begin();itr!=mp1.end();itr++){
        	if(itr->second%2==1){
        		l=itr->first;
        	}
        }
        cout<<k<<" "<<l;
        cout<<endl;
	}
}