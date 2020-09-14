 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll getTheMinimum(ll a,ll b,ll x,ll y,ll n){
    ll bCount=b-y;
    if(n>bCount){
        n-=bCount;
        if(n>(a-x))return x*y;
        else{
           a-=n;
           return a*y;
        }
    }else{
        b-=n;
        return a*b;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll p=getTheMinimum(a,b,x,y,n);
        ll q=getTheMinimum(b,a,y,x,n);
        ll minimum=min(p,q);
        cout<<minimum<<endl;
    }
}