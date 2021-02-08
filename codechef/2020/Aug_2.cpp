#include<bits/stdc++.h>
using namespace std;
int capturingChef(int arr[],int n,int k){
	int min=INT_MAX;
	int index;
	int flag=0;
            for(int i=0;i<n;i++){
            	if(arr[i]<=k&&((k-arr[i])%arr[i])==0){
            		flag=1;
                   int diff=(k-arr[i]);
                   if(diff<min){
                   	min=diff;
                   	index=i;
                   }
            	}
            }
            if(flag==1)return index;
            else
            	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<capturingChef(arr,n,k)<<endl;
	}
}