#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int start=1;
	int end=N;
	int flag=0;
	while(start<=end){
		int mid=start+(end-start)/2;
		cout<<mid<<endl;
		fflush(stdout);
		char ch;
		cin>>ch;
		if(ch=='E'){
			flag=1;
			break;
		}
		if(ch=='L'){
			cout<<mid<<endl;
			fflush(stdout);
			char ch_1;
			cin>>ch_1;
			if(ch==ch_1){
				if(ch_1=='L'){
					end=mid-1;
				}
				else  if(ch_1=='G'){
					start=mid+1;
				}
			}
			else if(ch!=ch_1){
				if(ch_1=='L'){
					start=mid+1;
				}
				else if(ch_1=='G'){
					end=mid-1;
				}
			}
		}
		else if(ch=='G'){
			cout<<mid<<endl;
			fflush(stdout);
			char ch_2;
			cin>>ch_2;
			if(ch==ch_2){
				if(ch_2=='L'){
					end=mid-1;
				}
				else if(ch_2=='G'){
					start=mid+1;
				}
			}
			else if(ch!=ch_2){
				if(ch_2=='L'){
					start=mid+1;
				}
				else if(ch_2=='G'){
					end=mid-1;
				}
			}
		}
	}
	if(flag==0){
		start=1;
		end=N;
		while(start<=end){
			int mid_1=start+(end-start)/2;
			cout<<mid_1<<endl;
			fflush(stdout);
			char ch_3;
			cin>>ch_3;
			if(ch_3=='E'){
				flag=1;
				break;
			}
			if(ch_3=='L'){
				cout<<mid_1<<endl;
				fflush(stdout);
				char ch_4;
				cin>>ch_4;
				if(ch_4==ch_3){
					if(ch_4=='L'){
						end=mid_1-1;
					}
					else if(ch_4=='G'){
						start=mid_1+1;
					}
				}
				else if(ch_4!=ch_3){
					if(ch_4=='L'){
						end=mid_1-1;
					}
					else if(ch_4=='G'){
						start=mid_1+1;
					}
				}
			}
			else if(ch_3=='G'){
				cout<<mid_1<<endl;
				fflush(stdout);
				char ch_5;
				cin>>ch_5;
				if(ch_5==ch_3){
					if(ch_5=='L'){
						end=mid_1-1;
					}
					else if(ch_5=='G'){
						start=mid_1+1;
					}
				}
				else if(ch_5!=ch_3){
					if(ch_5=='L'){
						end=mid_1-1;
					}
					else if(ch_5=='G'){
						start=mid_1+1;
					}
				}
			}
		}
	}
	return 0;
}