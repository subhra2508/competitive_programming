#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		string s;
		cin>>s;
		int count=0;
		if(s[0]=='1'){
			for(int i=0;i<s.size();){
				if(s[i+k+1]=='0'){
					count++;
				}
				i=i+k+1;
			}
		}else if(s[0]=='0'){
			for(int i=0;i<s.size();){
				if(s[i+k+1]=='0'){
					count++;
				}
				i=i+k+1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}