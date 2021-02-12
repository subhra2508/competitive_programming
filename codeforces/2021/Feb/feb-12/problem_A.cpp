#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int minOperations(int a,int b){ 
    int count=INT_MAX;
    int firstB=b;
    while(1){
        int ans=countCheckB(b);
        int countMin=ans+b-firstB;
        if(countMin<=count){
            count=countMin;
            b++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<2<<endl;
        }
        else if(a<b){
            cout<<1<<endl;
        }
        else{
            int ans=0;
            if(b==1){
               b=b+1;
               ans++;
            }
            else{
                ans+=minOperations(a,b);
            }
        }
    }
}