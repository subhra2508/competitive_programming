#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check_map_element(map<ll,ll>&mp){
            for(auto itr=mp.begin();itr!=mp.end();itr++){
            	if(itr->second%2==1){
            		return false;
            	}
            }
            return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		//int A[n];
		//int B[n];
		map<ll,ll>mp;
		set<ll>s1;
		set<ll>s2;
		set<ll>s3;
		for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            s1.insert(x);
            mp[x]++;
            s3.insert(x);
		}
		for(ll i=0;i<n;i++){
			ll y;
			cin>>y;
			s2.insert(y);
			mp[y]++;
			s3.insert(y);
		}
		//check_map_element(mp);
		ll count=0;
		ll sum=0;
		if(check_map_element(mp)){
			if(s1==s2){
				cout<<0<<endl;
			}
			else{
                for(auto itr=s3.begin();itr!=s3.end();itr++){
                      count++;
                	if(count<=s3.size()/2){
                		sum+=*itr;
                	}
                } 
                cout<<sum<<endl;
			}
		}
		else
			cout<<-1<<endl;
		
	}
}