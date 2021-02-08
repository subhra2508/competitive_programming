#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkupperlimit(vector<ll>v,ll num){
    for(ll i=0;i<v.size();i++){
        if(v[i]>num){
            return true;
        }
    }
    return false;
}
string countingZeros(ll arr[],ll n){
    ll count=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        while(arr[i]==0){
            count++;
            i++;
        }
        if(count!=0){
            v.push_back(count);
             count=0;
        }
    }
    if(v.size()==0)return "No";
    if(v.size()==1){
        if(v[0]%2==0)return "No";
        else return "Yes";
    }
    sort(v.begin(),v.end());
    if(v.size()>1){
         int lastIndex=v.size()-1;
         ll mid=(v[lastIndex]+1)/2;
         if((v[lastIndex]%2==1)&&(mid>v[lastIndex-1])){
             return "Yes";
         }
         else{
             return "No";
         }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<countingZeros(arr,n)<<endl;
    }
}