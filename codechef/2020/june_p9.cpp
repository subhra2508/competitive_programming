#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	//int k=300;
      int N;
      cin>>N;
      int flag=0;
      int flag_1=0;
      int start=1;
      int end=N;
      while(start<=end){
      	int mid_2=start+(end-start)/2;
      	cout<<mid_2<<endl;
      	fflush(stdout);
      	char z;
      	cin>>z;
      	if(z=='E'){
      		flag_1=1;
      		break;
      	}
      	else if(z=='L'){
      		end=mid_2-1;
      	}
      	else if(z=='G'){
      		start=mid_2+1;
      	}
      }
  if(flag_1==0){
  	start=1;
  	end=N;
      while(start<=end){
      	char ch;
      	int mid=start+(end-start)/2;
      	cout<<mid<<endl;
      	fflush(stdout);
      	cin>>ch;
      	if(ch=='E'){
      		flag=1;
      		break;
      	}
      	else if(ch=='L'){
      		cout<<mid<<endl;
      		fflush(stdout);
      		char c;
      		cin>>c;
      		if(c=='L'){
      			start=mid+1;
      		}
      		else if(c=='G'){
      			end=mid-1;
      		}

      	}else if(ch=='G'){
      		cout<<mid<<endl;
      		fflush(stdout);
      		char c_1;
      		cin>>c_1;
      		if(c_1=='L'){
      			start=mid+1;
      		}else if(c_1=='G'){
      			end=mid-1;
      		}
      	}
      }
  }
      if(flag==0&&flag_1==0){
         start=1;
         end=N;
         while(start<=end){
         	int mid_1=start+(end-start)/2;
         	cout<<mid_1<<endl;
         	fflush(stdout);
         	char ch_2;
         	cin>>ch_2;
         	if(ch_2=='E'){
         		flag=1;
         		break;
         	}
         	else if(ch_2=='G'){
         		cout<<mid_1<<endl;
         		fflush(stdout);
         		char ch_3;
         		cin>>ch_3;
         		if(ch_3=='L'){
         			end=mid_1-1;
         		}else if(ch_3=='G'){
         			start=mid_1+1;
         		}
         	}else if(ch_2=='L'){
         		cout<<mid_1<<endl;
         		fflush(stdout);
         		char ch_4;
         		cin>>ch_4;
         		if(ch_4=='L'){
         			end=mid_1-1;
         		}else if(ch_4=='G'){
         			start=mid_1+1;
         		}
         	}
         }
      }
}