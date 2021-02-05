#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int x,y,n,i,max=0;
		cin>>x>>y>>n;
		for(i=n;i>=0;i--){
			if(i%x==y){
                if(max<i){
                	max=i;
                	break;
                }
			}
		}
		cout<<max<<endl;
	}

}