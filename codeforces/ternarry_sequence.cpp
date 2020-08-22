#include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main(){
     ll t;
     cin>>t;
     while(t--){
         ll x1,y1,z1;
         ll x2,y2,z2;
         ll sum=0;
         cin>>x1>>y1>>z1;
         cin>>x2>>y2>>z2;
         if(x1>z2){
             x1=z2-x1;
             z2=0;
         }
         else{
             z2=z2-x1;
             x1=0;
         }
         if(z2==0){
             if(y2>=z1){
                 y2=y2-z1;
                 sum=z1*2;
             }else{
                 z1=z1-y2;
                 sum=y2*2;
                 y2=0;
             }
         }
         if(z2!=0){
             if(z1>=z2){
                 z1=z1-z2;
                 z2=0;
                 if(z1>0){
                     if(y2>=z1){
                         y2=y2-z1;
                         sum=z1*2;
                     }else{
                         z1=z1-y2;
                         sum=y2*2;
                     }
                 }
                 else
                 {
                     sum=0;
                 }
             }
             else
             {
                 z2=z2-z1;
                 z1=0;
                 if(y1>=z2){
                     y1=y1-z2;
                     sum=-(z2*2);
                 }else{
                     sum=-(y1*2);
                 }
                 
             }
         }
         cout<<sum<<endl;
         
     }
     return 0;
 }