#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll t;
     cin>>t;
     while(t--){
        ll a,b,x,y,total;
        cin>>a>>b>>x>>y>>total;
        ll diff1=abs(a-b);
        ll diff2=abs(x-y);
        if(diff1>diff2){
            ll small = min(a,b);
            if(small == a){
               if(a-x<=total){
                   a=x;
                   total-=(a-x);
                   if(total){
                       if(b-y<=total){
                           b=y;
                           total=0;
                       }else{
                           b-=total;
                       }
                   }
                   cout<<(a*b)<<endl;
               }
               else{
                   a=a-total;
                   cout<<a*b<<endl;
               }
            }
            else{
                if(b-y<=total){
                   b=y;
                   total-=(b-y);
                   if(total){
                       if(a-x<=total){
                           a=x;
                           total=0;
                       }else{
                           a-=total;
                       }
                   }
                   cout<<(a*b)<<endl;
               }
               else{
                   b=b-total;
                   cout<<a*b<<endl;
               }
            }
        }else{
          ll smallest=min(x,y);
          if(smallest == x){
                if(a-x<=total){
                   a=x;
                   total-=(a-x);
                   if(total){
                       if(b-y<=total){
                           b=y;
                           total=0;
                       }else{
                           b-=total;
                       }
                   }
                   cout<<(a*b)<<endl;
               }
               else{
                   a=a-total;
                   cout<<a*b<<endl;
               }
          }
          else{
               if(b-y<=total){
                   b=y;
                   total-=(b-y);
                   if(total){
                       if(a-x<=total){
                           a=x;
                           total=0;
                       }else{
                           a-=total;
                       }
                   }
                   cout<<(a*b)<<endl;
               }
               else{
                   b=b-total;
                   cout<<a*b<<endl;
               }
            }
          }
        }
        return 0;
}