#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_odd(unsigned long long int n){
     unsigned long long int count=1;
     while(n%2==0){
  	count=count*2;
  	n=n/2;
  }
  return count;
}
void tom_is_even(unsigned long long int n){
	unsigned long long int count;
	unsigned long long int num=n-2;
	unsigned long long int jerry_vectory=0;
	count=count_odd(n);
	while(num>count){
        if(num%count==0&&(num/count)%2==0){
        	jerry_vectory++;
        }
        num=num-2;
	}
	cout<<jerry_vectory<<endl;
}
void tom_is_odd(unsigned long long int n){
      //unsigned long long int sum=0;
      unsigned  long long int count;
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