#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
		}
		int count=0;
		
		for(auto itr=mp.begin();itr!=mp.end();itr++){
			if(itr->second>1){
				count+=itr->second;
			}
		}
		cout<<count<<endl;
	}
}