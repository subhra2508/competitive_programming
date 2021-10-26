#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int total = a+2*b+3*c;
    if(total %2 == 0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}