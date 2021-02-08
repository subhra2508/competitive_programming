#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll lower=lower_bound(v.begin(),v.end(),x)-v.begin();
		ll count=0;
		for(int i=lower;i<n;i++){
			if(x<v[i]){
				while(x<v[i]){
					x=x*2;
					count++;
				}
				count++;
			}
			else
				count++;
			x=2*v[i];
		}
		ll c=lower+count;
		if(lower!=0)
		{
             count=0;
             lower--;
             for(int i=lower;i<n;i++){
             	if(x<v[i]){
             		while(x<v[i]){
             			x=x*2;
             			count++;
             		}
             		count++;
             	}
             	else
             		count++;
             	x=2*v[i];
             }
             if(count+lower<c)
             	cout<<count+lower<<endl;
             else
             	cout<<c<<endl;
		}
		else
			cout<<c<<endl;
	}
}
	
