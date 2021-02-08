 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checking_all(int arr1[],int arr2[]){
         for(int i=0;i<3;i++){
        if(arr1[i]!=arr2[i])return false;}
        return true;
}
int compare(int arr1[],int arr2[]){
	for(int i=0;i<3;i++){
		if(arr1[i]!=arr2[i])return i;} 
	return 0;
}
void converting(int arr1[],int arr2[]){
	vector<int>v;
	int count=0;
	int check=0;
	int j;
	for(int i=0;i<3;i++){
		int p;
		p=arr2[i]-arr1[i];
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	const auto duplicate=std::adjacent_find(v.begin(),v.end());
	if(duplicate!=v.end()){
       j=*duplicate;
	}for(int i=0;i<v.size();i++){
       if(j==v[i]){
       	check++;
       }
	}if(check&&j!=0){
	//operation_1:
	for(int i=0;i<3;i++){
		 
	    if(arr2[i]-arr1[i]==0) continue;
		else
		arr1[i]=arr1[i]+j;
	}
	count++;
	if(checking_all(arr1,arr2)){
		cout<<count<<endl;

	}
	//operation_2:
	else{
	int k= compare(arr1,arr2);
	int l=arr2[k]-arr1[k];
	arr1[k]=arr1[k]+l;
	count++;
	if(checking_all(arr1,arr2)){
		cout<<count<<endl;
	}


   }
 } 
else{
	 if(binary_search(v.begin(),v.end(),0)){
	  vector<int>::iterator it=find(v.begin(),v.end(),0);
	  v.erase(it);
	  if(binary_search(v.begin(),v.end(),0)){
	  	cout<<1<<endl;
	  }else{
	  	cout<<2<<endl;
	  }
}else{
	cout<<3<<endl;
        }
	
     }
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
		converting(arr1,arr2);
	}
}