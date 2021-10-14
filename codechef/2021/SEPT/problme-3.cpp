#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countEvenSum(vector<ll>v,unordered_map<ll,bool>&mp){
	ll count = 0;
// 	cout<<"vector size () = "<<v.size()<<endl;
	for(ll i=0;i<v.size();i++){
	   // cout<<"iteration count = "<<i<<endl;
		 if((i+1)%2==1){
		  //   cout<<"iteration count = "<<i<<endl;
		 	if(v[i]%2==1){
		 		count++;
		 	// 	cout<<"v[i]="<<v[i]<<"false"<<endl;
		 		mp[v[i]]=false;
		 	}
		 }
		 else{
		 	if(v[i]%2==0){
		 	    // cout<<"iteration count = "<<i<<endl;
		 		count++;
		 	// 		cout<<"v[i]="<<v[i]<<"true"<<endl;
		 		mp[v[i]]=true;
		 	}
		 }
	}
	return count;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(n);
		for(ll i=0;i<n;i++){
			cin>>v[i];
		}
		unordered_map<ll,bool>mp;
		ll count = countEvenSum(v,mp);
		ll totalLength = v.size();
		ll totalExistingOnes = totalLength - count;
// 		cout<<"totalExistingOnes="<<totalExistingOnes<<endl;
		ll odd_odd =0;
		ll even_even = 0;
		for(auto it:mp){
			if(it.second==false){
				odd_odd+=1;
			}
			else{
				even_even+=1;
			}
		}
// 		cout<<"even ="<<even_even<<" and "<<"odd = "<<odd_odd<<endl;
// 		ll total_count = abs(odd_odd-even_even);
// 		cout<<"odd and even values differences = "<<total_count<<endl;
// 		ll max_ones = totalExistingOnes+(mp.size()-total_count)/2;
        ll min;
		if(even_even > odd_odd){
		  min = odd_odd;  
		}
		else if(even_even < odd_odd){
		    min = even_even;
		}
		else{
		    min = odd_odd;
		}
		cout<<totalExistingOnes+min*2<<endl;

	}
}