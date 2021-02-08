#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		int sum=0;
		int sum1=0;
		cin>>n;
		cin>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
           sum=sum+arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]>k){
				arr[i]=k;
			}
		}
		for(int i=0;i<n;i++){
			sum1=sum1+arr[i];
		}
		cout<<sum-sum1<<endl;
	}
}