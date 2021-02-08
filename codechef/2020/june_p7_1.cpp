#include<bits/stdc++.h>
using namespace std;
void check_arr(int arr1[],int arr2[]){
	int operations=0;
	int i=0;
	while(i<3){
		if(arr1[i]-arr2[i]==0){
			continue;
		}
		int diff=arr2[i]-arr1[i];
		i++;
		while(i<3&&arr2[i]-arr1[i]==diff){
			i++;
		}
		operations++;
	}
	cout<<operations<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int arr1[3];
		int arr2[3];
		for(int i=0;i<3;i++){
			cin>>arr1[i];
		}
		for(int i=0;i<3;i++){
			cin>>arr2[i];
		}
		check_arr(arr1,arr2);
	}
}