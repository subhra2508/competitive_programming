#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
       int n;
       cin>>n;
       int arr[n];
       vector<int>v1;
       vector<int>v2;
       for(int i=0;i<n;i++){
       	cin>>arr[i];
       }
       for(int i=0;i<n;i++){

       	if(arr[i]%2==0&&i%2!=0)
       	{
       		v1.push_back(arr[i]);
       	}
       	else if(arr[i]%2!=0&&i%2==0)
       	{
       		v2.push_back(arr[i]);
       	} 
	}
	if(v1.size()!=v2.size()){
		cout<<-1<<endl;
	}else{
		cout<<v1.size()<<endl;
	}
  }
}