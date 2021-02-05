 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
    ll count;
    if(k-n>=0){
        count=(n*(n-1))/2;
         
            count++;
    }
    else{
        count=(k*(k+1))/2;
    }
    cout<<count<<endl;
       
   }
   return 0;
}