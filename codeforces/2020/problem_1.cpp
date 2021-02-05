#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		//int n=s.size()-1;
		vector<char>v;
		v.push_back(s[0]);
		int i=1;
		int n=s.size();
		 while(i<s.size()){
		 	if(s[i]==s[i+1]){
		 		v.push_back(s[i]);
		 		i=i+1;
		 	}
		 	i++;
		 }
		 if(n-1!=0){
		 v.push_back(s[n-1]);}
		 for(int i=0;i<v.size();i++){
		 	cout<<v[i];
		 }
		 cout<<endl;
	}
}