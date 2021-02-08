#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void convert(int *a,int *b)
{
	*a=*a/2;
	*b=*b/2;
}
int counteven(int n){
     //counting even_even for jerry:
	vector<int>v;
	int sum=0;
	int count=0;
	while(sum<n){
		sum=sum+2;
		if(sum<n&&sum!=n){
			v.push_back(sum);
		}
	}
	int q=n/2;
	if(q%2==0){
         for(int i=0;i<n;i++){
         	int j=n/2;
         	int k=v[i]/2;
         	while(j%2==0 && k%2==0){
         		convert(&j,&k);
         	}
         	if(j%2!=0&&k%2==0){
         		count++;
         	}

         }
	}
	else
	{
	for(int i=0;i<v.size();i++){
		int check=v[i]/2;
		if(check%2==0){
			count++;
		}
	}
}
	return count;
}
int countodd(int n){
	//counting even_for jerry:
	vector<int>v;
	int sum=0;
	while(sum<n){
		sum=sum+2;
		if(sum<n){
		v.push_back(sum);}
	}
	return v.size();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==0){
			cout<<counteven(n)<<endl;
		}else{
			cout<<countodd(n)<<endl;
		}
	}
}