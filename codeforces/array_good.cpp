#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int count=0;
		int count_even=0;
		int count_odd=0;
		int odd_number=(n)/2;
		int even_number=(n+1)/2;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				count_even++;
			}
			else{
				count_odd++;
			}
		}
			if(odd_number==count_odd&&even_number==count_even){
                  for(int i=0;i<n;i++){
                  	if(i%2==0){
                  		if(arr[i]%2==0){
                  			continue;
                  		}
                  		else{
                  			for(int j=i+1;j<n;j++){
                  				if(arr[j]%2==0){
                  					swap(arr[i],arr[j]);
                  					count++;
                  					break;
                  				}
                  			}
                  		}
                  	}
                  	else{
                  		if(arr[i]%2!=0){
                  			continue;
                  		}
                  		else{
                  			for(int j=i+1;j<n;j++){
                  				if(arr[j]%2!=0){
                  					swap(arr[i],arr[j]);
                  					count++;
                  					break;
                  				}
                  			}
                  		}
                  	}
                 
			}
			cout<<count<<endl;
		}
		else{
				cout<<-1<<endl;
			}
		
	}
	return 0;
}