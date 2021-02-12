#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int p_x,p_y;
		cin>>p_x>>p_y;
		string s;
		cin>>s;
		int r=0,l=0,d=0,u=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='R')r++;
			else if(s[i]=='L')l++;
			else if(s[i]=='D')d++;
			else u++;
		}
		int total=0;
		if(p_x==0)total++;
		else if(p_x>0&&r>=abs(p_x))total++;
		else if(p_x<0&&l>=abs(p_x))total++;
		if(p_y==0)total++;
		else if(p_y>0&&u>=abs(p_y))total++;
		else if(p_y<0&&d>=abs(p_y))total++;
		if(total==2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}