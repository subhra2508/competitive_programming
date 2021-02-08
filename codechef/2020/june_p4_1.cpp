#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//#define const unsigned int m = 1000000007;
int count_odd(unsigned long long int n){
     unsigned long long int count=1;
     while(n%2==0){
  	count=count*2;
  	n=n/2;
  }
  return count;
}
void tom_is_even(unsigned long long int n){
	vector<unsigned long long int>v;
	unsigned long long int sum=0;
   unsigned long long int count;
   int count_jerry=0;
 count=count_odd(n);
   while(sum<n){
   	sum=sum+2;
   	if(sum<n){
   		v.push_back(sum);
   	}
   } 
   for(unsigned long long int  i=0;i<v.size();i++){
   	unsigned long long int check=v[i]/count;
   	     if(v[i]>count&&v[i]%count==0&&check%2==0){
   	     	count_jerry++;
   	     }
   }
   cout<<"count_jerry="<<count_jerry<<endl;
}
void tom_is_odd(unsigned long long int n){
      unsigned long long int sum=0;
      unsigned  long long int count=0;
      while(sum<n){
      	sum=sum+2;
        count++;
      }
      cout<<count-1<<endl;
}
int main(){
	 const unsigned int m = 1000000007;
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n;
		cin>>n;
		if((n%m)%2==0){
			tom_is_even(n);
		}else{
			tom_is_odd(n);
		}
	}
}