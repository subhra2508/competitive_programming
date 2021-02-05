 #include<bits/stdc++.h>
 using namespace std;
 typedef long long int ll;
 int main(){
     ll t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         ll arr[n];
         arr[0]=1;
         arr[1]=2;
         ll x=2;
         for(ll i=2;i<n;i++){
              x=x+3;
             arr[i]=x;
         }
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
     return 0;
 }