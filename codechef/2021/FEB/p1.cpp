#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int res=INT_MIN;
	for(int i=1;i<=10;i++){
        if(n%i==0){
        	int minDiv=i;
        	if(res<=minDiv){
        		res=minDiv;
        	}
        }
	}
	cout<<res<<endl;
	return 0;
}