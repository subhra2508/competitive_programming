#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t;
	cin>>t;
	while(t--){
		string p;
		cin>>p;
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++){
        	string s;
        	cin>>s;
        	v.push_back(s);
        }
        for(int i=0;i<v.size();i++){
        	cout<<v[i]<<endl;
        }

	}
}