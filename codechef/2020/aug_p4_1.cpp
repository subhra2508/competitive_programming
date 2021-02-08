#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s1,s2,s3;
		cin>>s1>>s2;
		string s4;
		ll size_s1=s1.length();
		ll size_s2=s2.length();

		ll arr1[27];
		ll arr2[27];
		memset(arr1,0,sizeof(arr1));
		for(ll i=0;i<size_s1;i++){
			arr1[s1[i]-'a']++;
		}
		for(ll i=0;i<size_s2;i++){
			arr1[s2[i]-'a']--;
		}
		for(ll i=0;i<26;i++){
			arr2[i]=arr1[i];
		}
		for(ll i=0;i<=(s2[0]-'a');i++){
			 while(arr1[i]>0){
			 	s3+=(char)(i+97);
			 	arr1[i]--;
			 }
		}
		s3+=s2;
		for(ll i=0;i<26;i++){
			while(arr1[i]>0){
				s3+=(char)(i+97);
				arr1[i]--;
			}
		}
		for(ll i=0;i<(s2[0]-'a');i++){
			while(arr2[i]>0){
				s4+=(char)(i+97);
				arr2[i]--;
			}
		}
		s4+=s2;
		for(ll i=0;i<26;i++){
			while(arr2[i]>0){
				s4+=(char)(i+97);
				arr2[i]--;
			}
		}
		cout<<min(s3,s4)<<endl;
	}
}