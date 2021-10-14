#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	ll t;
	cin>>t;
	while(t--){
		ll x,a,b;
		cin>>x>>a>>b;
		ll solubilityMax = a+b*(100-x);
		cout<<solubilityMax*10<<endl;
	}
	return 0;

}