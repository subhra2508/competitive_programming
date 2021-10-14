#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll bag_total = a+b+c;
		if(bag_total <= d){
			cout<<1<<endl;
		}
		else{
		 if(a+b <= d || b+c <= d || a+c <= d){
		     cout<<2<<endl;
		 }
		 else{
		     cout<<3<<endl;
		 }
		}
	}
}


// He puts the boxes in bags of size D (A≤B≤C≤D).
// Find the minimum number of bags Chef needs so that he can put each box in a bag.