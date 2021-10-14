#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //D=no of days
        //d=increase after d no of days
        //p= print p/day
        //q=after d days q amount increase
        int D,d,P,Q;
        cin>>D>>d>>P>>Q;
        int total = 0;
        int i = 0;
        while(D>0){
           if(D>=d){
                total+=(P+(i*Q))*d;
           }
           else{
               total+=(P+(i*Q))*(d-D);
           }
            i++;
            D-=d;
        }
        cout<<total<<endl;
    }
}