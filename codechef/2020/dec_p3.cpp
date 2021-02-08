#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n,d;
    	cin>>n>>d;
    	ll arr[n];
    	for(ll i=0;i<n;i++){
            cin>>arr[i]; 
    	}
    	if(d==1){
    		cout<<n<<endl;
    	}
    	else{
    	     ll count1=0;
    	     ll count2=0;
    	     ll total;

    	     for(int i=0;i<n;){
    	     	if(arr[i]<=9 || arr[i]>=80){                                                 
    	     	  ll risk_count=0;
    	     	  while(arr[i]<=9 || arr[i]>=80 && i < n){
    	     	  	// cout<<"while block in if block i =="<<i<<endl;
    	     	   risk_count++;
    	     	   i++;
    	     	    }
                   // cout<<"first while risk_count = "<<risk_count<<endl;
                  count1+=(risk_count/d)+(risk_count%2);
                  // cout<<"count1 and i == "<<count1<<i<<endl;
    	     	}
    	     	if(arr[i]>9&&arr[i]<80){
    	     		ll unrisk_count=0;
    	     		while(arr[i]>9&&arr[i]<80&&i<n){
    	     			// cout<<"while block in second if block i== "<<i<<endl;
                      unrisk_count++;
                      i++;
    	     		}
    	     		//  cout<<"second while unrisk_count = "<<unrisk_count<<endl;
    	     		// cout<<"final i == "<<i<<endl;
    	     		count2+=(unrisk_count/d)+(unrisk_count%d);
    	     		 // cout<<"count2 and i == "<<count2<<i<<endl;
    	     	}

    	     }
    	     total=count1+count2;
    	     cout<<total<<endl;
    	}
    	
    }
}