// You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). 
// Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.

// Input Format
// The first line contains T denoting the number of test cases. Then the test cases follow.
// Each test case contains a single integer N on a single line.

// Output Format
// For each test case, output on a single line the length of the longest subarray that satisfy the given property.

// Sample Input 1 
// 5
// 1
// 2
// 3
// 4
// 7
// Sample Output 1 
// 1
// 1
// 2
// 2
// 4

#include<bits/stdc++.h>
using namespace std;
int lengthOfSubarray(int n){
    if(n==1 || n==2){
        cout<<ans<<endl;
        return;
    }
    p = (int)log2(n);
    p_near = (int)pow(2,p);
    p_2near = (int)pow(2,p-1);
    near_count = n-p_near+1;
    near_2count = p_near-p_2near;
    if(near_count > near_2count){
        cout<<near_count<<endl;
    }
    else{
        cout<<near_2count<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int result = lengthOfSubarray(n);
        cout<<result<<endl;
    }
}