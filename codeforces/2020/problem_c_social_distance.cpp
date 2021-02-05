#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		int k;
		int count=0;
		cin>>n;
		cin>>k;
		cin>>s;
		vector<char>v;
		for(int i=0;i<s.size();i++){
			v.push_back(s[i]);
		}
		 if(v[0]=='1'){
		 	int i=0;
		 	while(i<v.size()){
		 		if(v[i+k+1]=='0'){
                   v[i+k+1]='1';
                   count++;   
		 		}
		 		i=k+1;
		 	}
		 }
		 else if(v[0]=='0'){
		 	int i=0;
		 	while(i<v.size()){
		 		if(v[i+k]=='0'){
		 			v[i+k]='1';
		 			count++;
		 		}
		 		i=i+k;
		 	}
		 }

        cout<<count<<endl;
	}


}