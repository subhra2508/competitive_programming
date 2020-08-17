#include<bits/stdc++.h>
using namespace std;
int check_all_the_element(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            return 0;
        }
    }
    return 1;
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
        int x=check_all_the_element(arr,n);
        if(x)cout<<n<<endl;
        else{
            cout<<1<<endl;
        }
    }
}