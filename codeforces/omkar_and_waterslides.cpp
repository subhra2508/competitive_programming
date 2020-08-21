/*
Omkar is building a waterslide in his water park, and he needs your help to ensure that he does it as efficiently as possible.

Omkar currently has n supports arranged in a line, the i-th of which has height ai. Omkar wants to build his waterslide from the right to the left, so his supports must be nondecreasing in height in order to support the waterslide. In 1 operation, Omkar can do the following: take any contiguous subsegment of supports which is nondecreasing by heights and add 1 to each of their heights.

Help Omkar find the minimum number of operations he needs to perform to make his supports able to support his waterslide!

An array b is a subsegment of an array c if b can be obtained from c by deletion of several (possibly zero or all) elements from the beginning and several (possibly zero or all) elements from the end.

An array b1,b2,…,bn is called nondecreasing if bi≤bi+1 for every i from 1 to n−1.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). Description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the number of supports Omkar has.

The second line of each test case contains n integers a1,a2,...,an (0≤ai≤109) — the heights of the supports.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, output a single integer — the minimum number of operations Omkar needs to perform to make his supports able to support his waterslide.
*/
/*
Example
input
3
4
5 3 2 5
5
1 2 3 5 3
3
1 1 1
output
3
2
0 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findTheMinimumOperation(ll arr[],ll n){
	vector<ll>v;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			int j=i;
			v.clear();
			for(;j<n;j++){
				if(arr[j+1]>=arr[j]){
					break;
				}

                   v.push_back(arr[j]);
			}
            count+=arr[i]-(*min_element(v.begin(),v.end()));
            i=j;
		}
		
	}
	return count;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++){
            cin>>arr[i];
		}
		cout<<findTheMinimumOperation(arr,n)<<endl;
	}
}