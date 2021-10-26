//Each second, you can select a mouse that will make a move. 
//What is the maximum number of mice that can reach the hole without being eaten?


//problem tag binary search,greedy

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int holePosition,noOfMice;
        cin>>holePosition>>noOfMice;
        vector<int>v(noOfMice);
        for(int i=0;i<noOfMice;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int catPosition = 0;
        int count = 0;
        for(int i=0;i<noOfMice;i++){
            if(catPosition >= v[i]){
                continue;
            }
            else{
                catPosition+=holePosition-v[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}