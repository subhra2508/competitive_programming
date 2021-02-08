#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		 ll x,y;
		 cin>>x>>y;//x is chef and y is rick
		 if(x<9&&y<9){
		 	//rick win the game
		 	cout<<1<<" "<<1<<endl;
		 }
		 else if(x<9&&y>9){
               cout<<0<<" "<<1<<endl;
		 }
		 else if(x>9&&y<9){
		 	cout<<1<<" "<<1<<endl;
		 }
		 else if(x>=9&&y>=9){
		 	ll count=0;
		 	ll m=x/9;
		 	if(x%9){
		 		m++;
		 	}
		 	ll n=y/9;
		 	if(y%9){
		 		n++;
		 	}
		 	if(m>n){
		 		cout<<1<<" "<<n<<endl;
		 	}
		 	if(m<n){
		 		cout<<0<<" "<<m<<endl;
		 	}
		 	if(m==n){
		 		cout<<1<<" "<<n<<endl;
		 	}
		 }
}
return 0;
}
