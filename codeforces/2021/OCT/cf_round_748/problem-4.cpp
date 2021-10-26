
//maximum possible number the polycarp can be used to make the array
//elements similar
// https://www.youtube.com/watch?v=fDkkLpJ9rPk


#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
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
        
        int ans = abs(arr[0]-arr[1]);
        for(int i=1;i<n-1;i++){
            ans = gcd(ans,abs(arr[i]-arr[i+1]));
        }
        if(ans == 0){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}