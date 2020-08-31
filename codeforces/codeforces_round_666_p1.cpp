#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<char,int>mp;
        int flag=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.length();j++){
                mp[s[j]]++;
            }
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if((itr->second)%n!=0){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
    }
}