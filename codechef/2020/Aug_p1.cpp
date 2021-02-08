#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int chefWinChance(ll hath,ll chef){
	while(1){
		if(hath<chef)return 1;
		if(hath<=0&&chef>0){
			return 1;
		}
		else if(hath>0&&chef<=0){
			return 0;
		}
		hath=hath-chef;
		chef/=2;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll hath,chef;
		cin>>hath>>chef;
	 cout<<chefWinChance(hath,chef)<<endl;
	}
}