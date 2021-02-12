#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<ll,ll>checkUR(string s,char x,char y){
    pair<ll,ll>p;
    ll count_U=0;
    ll count_R=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]==x){
           count_R++; 
        }
        if(s[i]==y){
            count_U++;
        }
    }
    p.first=count_R;
    p.second=count_U;
    return p;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll p_x,p_y;
        cin>>p_x>>p_y;
        string s;
        cin>>s;
        if(p_x>0&&p_y>0){
            char x='R';
            char y='U';
            pair<ll,ll>p=checkUR(s,'R','U');
           if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x>0&&p_y<0){
            pair<ll,ll>p=checkUR(s,'R','D');
           if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
        }
        if(p_x<0&&p_y>0){
             pair<ll,ll>p=checkUR(s,'L','U');
           if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x<0&&p_y<0){
             pair<ll,ll>p=checkUR(s,'L','D');
            if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x==0&&p_y>0){
             pair<ll,ll>p=checkUR(s,'R','U');
            if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x==0&&p_y<0){
             pair<ll,ll>p=checkUR(s,'R','D');
            if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x>0&&p_y==0){
             pair<ll,ll>p=checkUR(s,'R','U');
            if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }
        if(p_x<0&&p_y==0){
             pair<ll,ll>p=checkUR(s,'L','U');
            if(p.first<abs(p_x)||p.second<abs(p_y)){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
            
        }

    }
    return 0;
}
//---------------------------------solution-2-------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll checkChar(string s,char x){
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]==x){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll p_x,p_y;
//         cin>>p_x>>p_y;
//         string s;
//         cin>>s;
//         if(p_x>0&&p_y>0){
//             if(checkChar(s,'R')<abs(p_x)||checkChar(s,'U')<abs(p_y)){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
           
//         }
//         if(p_x>0&&p_y<0){
//              if(checkChar(s,'R')<abs(p_x)||checkChar(s,'D')<abs(p_y)){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
           
//         }
//         if(p_x<0&&p_y>0){
//               if(checkChar(s,'L')<abs(p_x)||checkChar(s,'U')<abs(p_y)){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
            
            
//         }
//         if(p_x<0&&p_y<0){
            
//               if(checkChar(s,'L')<abs(p_x)||checkChar(s,'D')<abs(p_y)){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
            
            
//         }
//     }
//     return 0;
// }