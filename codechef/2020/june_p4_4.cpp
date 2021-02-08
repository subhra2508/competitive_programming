#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_odd(unsigned long long int n){
	int count=0;
	while(n%2==0){
		n=n/2;
		count++;
	}
	return count;
}
void tom_is_even(unsigned long long int n){
    unsigned long long int count;
    count=count_odd(n);
    for(int i=0;i<count;i++){
      n=n/2;
    }
    cout<<n/2<<endl;
}
void tom_is_odd(unsigned long long int n){
	unsigned long long int count;
	count=n/2;
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n;
		cin>>n;
        if(n%2==0){
        	tom_is_even(n);
        }else{
        	tom_is_odd(n);
        }
	}
}