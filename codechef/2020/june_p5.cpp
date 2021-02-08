 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printMatrix(int n){
	int arr[n][n];
	int k=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
          arr[i][j]=k;
          k++;
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";}cout<<endl;
			
		}else{
			for(int j=n-1;j>=0;j--){
				cout<<arr[i][j]<<" ";}cout<<endl;
			
		}
	}
 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		printMatrix(n);
	}
}