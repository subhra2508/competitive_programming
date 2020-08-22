#include<bits/stdc++.h>
using namespace std;
void checkSwap(int arr[],int arr1[],int n){
    int flag=0;
    int min=*min_element(arr,arr+n);
    sort(arr1,arr1+n);
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr[i]){
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%min!=0){
            flag=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        checkSwap(arr,arr1,n);

    }
}