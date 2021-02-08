#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checking_all(int arr[],int n){
          vector<int>v;
           if(arr[0]==5)
           {
            for(int i=0;i<n;i++){
                if(arr[i]==5){
                    v.push_back(5);
                }
                else if(arr[i]==10){
                    int diff=5;
                    sort(v.begin(),v.end());
                    if(binary_search(v.begin(),v.end(),5)){
                        sort(v.begin(),v.end());
                        v.erase(v.begin());
                        v.push_back(10);
                    } 
                    else{
                        return false;
                    }
                }
                else if(arr[i]==15){
                    sort(v.begin(),v.end());
                    if(binary_search(v.begin(),v.end(),10)){
                        vector<int>::iterator it=find(v.begin(),v.end(),10);
                        v.erase(it);
                        v.push_back(15);
                    }
                    else if(binary_search(v.begin(),v.end(),5)){
                        sort(v.begin(),v.end());
                        v.erase(v.begin());
                        sort(v.begin(),v.end());
                        if(binary_search(v.begin(),v.end(),5)){
                            v.erase(v.begin());
                            v.push_back(15);
                        }else{
                            return false;
                        }
                    }else{
                        return false;
                    }
                }
            }
            return true; 
           }
           else{
            return false;
           }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool p=checking_all(arr,n);
        if(p)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}