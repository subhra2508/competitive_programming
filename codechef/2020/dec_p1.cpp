#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
        int d1,v1,d2,v2,p;
        cin>>d1>>v1>>d2>>v2>>p;
        int count=0;
        int sum=0;
        if(d1<=d2){
           int temp=d2-d1;
           while(p>sum){
           	if(temp>0){
           		sum+=v1;
           		temp--;
           		count++;
           	}
           	else{
           		sum+=v1+v2;
           		count++;
           	}
           }
           count+=d1-1;
           cout<<count<<endl;
        }
        if(d1>d2){
        	int temp=d1-d2;
        	while(p>sum){
        		if(temp>0){
        			sum+=v2;
        			temp--;
        			count++;
        		}
        		else{
        			sum+=v1+v2;
        			count++;
        		}
        	}
        	count+=d2-1;
        	cout<<count<<endl;
        }
	return 0;
}