 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		vector<int>v;
		vector<int>v1;
		int count=0;
		int len;
		cin>>s;
		len=s.length();
		for(int i=0;i<len;i++){
		   if(s[i]=='x'&&s[i+1]=='y'){
		     count++;
		    i=i+1;
		   }
		  else if(s[i]=='y'&&s[i+1]=='x'){
		       count++;
		        i=i+1;
		   }
		}
		cout<<count<<endl;
	}
}