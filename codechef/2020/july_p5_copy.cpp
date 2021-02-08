#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr1[n];
    ll arr2[n];
    ll flag=0;
    unordered_map<ll,ll>mp;
    unordered_map<ll,ll>mp1;
    unordered_map<ll,ll>mp2;
    ll m_1=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>arr1[i];
      mp[arr1[i]]++;
      m_1=min(arr1[i],m_1);
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
      mp[arr2[i]]++;
       m_1=min(arr2[i],m_1);
    }
     for(auto x:mp){
      if(x.second%2==1){
        flag=1;
        break;
      }else{
        mp1[x.first]=x.second/2;
      }
     }
     if(flag){
      cout<<-1<<endl;
      continue;
     }else{
      mp2=mp1;
      vector<ll>v1;
      vector<ll>v2;
      for(int i=0;i<n;i++){
        if(mp1[arr1[i]]){
          mp1[arr1[i]]--;}
          else
            v1.push_back(arr1[i]);
        }
      
      for(int i=0;i<n;i++){
        if(mp2[arr2[i]]){
          mp2[arr2[i]]--;

        }else
        v2.push_back(arr2[i]);
      }
      sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end(),greater<ll>());
      ll size=v1.size();
      if(size==0){
        cout<<0<<endl;

      }
      else{
        ll answer=0;
        for(int i=0;i<size;i++){
          answer+=min(2*m_1,min(v1[i],v2[i]));
        }
        cout<<answer<<endl;
      }
     }
  }
}