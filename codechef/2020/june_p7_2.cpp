#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_duplicates(vector<int>&v){
	int count=0;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]==v[j]){
				count++;
			}
		}
	}
	return count;
}
void converting_array(int a[],int b[]){
	int operation=0;
	int count;int j;
	vector<int>v;
         for(int i=0;i<3;i++){
         	int num=b[i]-a[i];
         	v.push_back(num);
         }
         sort(v.begin(),v.end());
         count=count_duplicates(v);
//1.none of them are duplicate:
         if(count==0){
         	operation=operation+3;
         	cout<<operation<<endl;

         }
//2.two are duplicates
         if(count==1){
           if(binary_search(v.begin(),v.end(),0)){
           	 operation=operation+1;
           	 cout<<operation<<endl;
           }else{
           	const auto duplicate=std::adjacent_find(v.begin(),v.end());
           	if(duplicate!=v.end()){
           		j=*duplicate;
           	}
           	for(int i=0;i<3;i++){
           		if((a[i]+j)<b[i]){
           			a[i]=a[i]+j;
           			operation++;
           		}
           	}
           }
           cout<<operation+1<<endl;

         }
//3.all are duplicates
         if(count==2){
             //const auto duplicate=std::adjacent_find(v.begin(),v.end());
             operation++;
             cout<<operation<<endl;
         }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[3];
		int b[3];
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		for(int i=0;i<3;i++){
			cin>>b[i];
		}
		converting_array(a,b);
	}
}