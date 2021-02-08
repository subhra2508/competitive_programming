#include<bits/stdc++.h>
using namespace std;
void printChessBoard(int n){
	 	 char arr[8][8];
	 for(int i=0;i<8;i++){
	 	for(int j=0;j<8;j++){
	 		 arr[i][j]='X';
	 	}
	 }  
 
	  int count=0;
	 for(int i=0;i<8;i++){
	 	for(int j=0;j<8;j++){
	 		 if(count<n){
	 		 	arr[i][j]='.';
	 		 	count++;
	 		 }
	 	}
	 } 
	 arr[0][0]='O';
	 for(int i=0;i<8;i++){
	 	for(int j=0;j<8;j++){
	 		 cout<<arr[i][j]<<" ";
	 	}
	 	cout<<endl;
	 } 

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		printChessBoard(n);
	}
}