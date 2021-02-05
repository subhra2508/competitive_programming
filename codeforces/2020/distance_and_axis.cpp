 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main(){
     ll t;
     cin>>t;
     while(t--){
         ll n,k;
         cin>>n>>k;
         if(k>n){
             cout<<(k-n)<<endl;
         }
         else{
             ll sum=k+n;
             if(sum%2==0){
                 cout<<0<<endl;
             }else{
                 cout<<1<<endl;
             }
         }
     }
     return 0;
 }
