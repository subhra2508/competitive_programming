//question no - 1 

#include<bits/stdc++.h>
using namespace std;

int helperElect(int temp,int num1,int num2){
    int res = 0;
     if(temp < num1 || temp == num1){
            res = abs(temp - num1) +1;
            if((temp < num2 || temp == num2)&& (res < (abs(temp - num2) + 1))){
                res= abs(temp - num2) + 1;  
            }
        }
        else{
             if((temp < num2 || temp == num2)&& (res < (abs(temp - num2) + 1))){
                res= abs(temp - num2) + 1;  
            }
        }
        return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int largest_num = max(max(a,b),c);
        
        int res_a = helperElect(a,b,c);
        int res_b = helperElect(b,a,c);
        int res_c = helperElect(c,a,b);
        cout<<res_a<<" "<<res_b<<" "<<res_c<<endl;
    }
}