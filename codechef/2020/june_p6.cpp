#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		//vector<int>v;
		int arr[61][61];
		int n,p;
		cin>>n>>p;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<1<<" "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
				fflush(stdout);
				int rec;
				cin>>rec;
				if(rec==-1)return 0;
				arr[i][j]=rec;
				//v.push_back(rec);
			}
		}
		cout<<2<<endl;
		fflush(stdout);
        for(int i=1;i<=n;i++){
        	for(int j=1;j<=n;j++){
        		cout<<arr[i][j]<<" ";
        		fflush(stdout);
        	}
        	cout<<endl;
        	fflush(stdout);
        }
        int x;
        cin>>x;
        if(x==-1){
        	break;
        }

	}
}