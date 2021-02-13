#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
   ll t;
    cin>>t;
    while(t--){
       ll a,b;
        cin>>a>>b;
       ll res=INT_MAX;
       ll count;
        for(ll i=0;i*i<=a;i++){
            if(b==1&&i==0){
                continue;
            }
            else{
                count=i;
               ll c=a;
                while(c){
                    c/=(b+i);
                    count++;
                }
                res=min(res,count);

            }
        }
        cout<<res<<endl;
        
    }
}