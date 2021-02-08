#include<bits/stdc++.h>
using namespace std;//first,middle,last
int findTheIndexToBeInserted(string s,temp){
	int index;
       for(int i=0;i<s.length();i++){
       	index=(int)s[i];
       	if(index>temp){
       		return i;
       	}
      }
       return s.length();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string s1;//desire substring
		cin>>s1;
		 for(int i=0;i<s1.length();i++){
              int index=s.find(s1[i]);
              s.erase(s.begin()+index);
		 }
		 sort(s.begin(),s.end());
		 int temp=(int)s1[0];
         int inserting_index=findTheIndexToBeInserted(s,temp);
         s.insert(inserting_index,s1);
         cout<<s<<endl;
	}
}