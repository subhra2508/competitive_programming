#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
 
int main()
{ 
 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+1];
        map<ll,ll>mp;
        ll answer=0,vc=0,t=1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll col[n+1][n+1]={0};
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
                col[i][j]=0;
        }
        for(int i=0;i<n;i++)
        {
            mp.clear();
            for(ll j=i;j<n;j++)
            {
                col[i][j]=(j==0)?0:col[i][j-1];
                if(mp.count(a[j]))
                {
                    if(mp[a[j]]==1)
                    {
                         col[i][j]++;
                    }
                    col[i][j]++;
                }
                mp[a[j]]++;
 
            }
 
        }
        
        
        
        
        
 
    answer=1e18;
    ll tab=100;
    ll dp[101][1001]={0};
    for(int i=0;i<=tab;i++)
    {
        for(int  j=0;j<=tab;j++)
        {
            dp[i][j]=0;
        }
    }
    
    
    
    
    
    for(int i=0;i<n+1;i++)
        dp[1][i]=col[0][i-1];
    for(int i=2;i<=tab;i++)
    {
        dp[i][1]=0;
    }
    for(int i=2;i<=tab;i++)
    {
        for(int j=2;j<=n;j++)
        {
            ll best=1e18;
            for(int p=1;p<j;p++)
            {
                best=min(best,dp[i-1][p]+col[p][j-1]);
            }
            dp[i][j]=best;
        }
    }
    
    
    
    
    for(tab =1;tab<=100;tab++)
    {
        answer=min(tab*k+dp[tab][n],ans);
    }
    cout<<answer<<"\n";
 
    }
 
}