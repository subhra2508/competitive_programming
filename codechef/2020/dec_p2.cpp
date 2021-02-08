#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	std::ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll count=0;
		ll count_odd1=0;
		ll count_even1=0;
		ll count_odd2=0;
		ll count_even2=0;
        if(a%2==0){
            count_odd1=a/2;
            count_even1=a-count_odd1;
        }
        if(a%2==1){
            count_odd1=(a+1)/2;
            count_even1=a-count_odd1;
        }
        if(b%2==0){
            count_odd2=b/2;
            count_even2=b-count_odd2;
        }
        if(b%2==1){
            count_odd2=(b+1)/2;
            count_even2=b-count_odd2;
        }
        
		count=(count_odd1*count_odd2)+(count_even1*count_even2);
		cout<<count<<endl;
	}
	return 0;
}