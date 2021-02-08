#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int addition(int num){
	int sum=0;
	while(num){
      sum+=num%10;
      num/=10;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int chef=0;
		int morty=0;

		while(n--){
           int c1,m1;
           cin>>c1>>m1;
            int chef_score=addition(c1);
            int morty_score=addition(m1);
            if(chef_score>morty_score){
            	chef+=1;
            }
            else if(chef_score<morty_score){
            	morty+=1;
            }
            else{
            	chef+=1;
            	morty+=1;
            }
		}
		if(chef>morty){
			cout<<0<<" "<<chef<<endl;
		}
		else if(chef<morty){
			cout<<1<<" "<<morty<<endl;
			}
		else{
			cout<<2<<" "<<chef<<endl;
		}
	}
}