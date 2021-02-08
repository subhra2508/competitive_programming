#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node*next;
};
void createLinkedList(Node**head_ref,int new_data){
	Node*new_node=new Node();
	new_node->data=new_data;
	new_node->next=NULL;
	Node*last=*head_ref;
	if(*head_ref==NULL){
		*head_ref=new_node;
		return ;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
	return;
}
string searchLinkedList(Node*head,int y,int k){
    Node*new_node=head;
 
    while(new_node){
         if(new_node->data==y){
         	return "YES";
         } 
         int count=0;
         while(new_node&&count<k){
         	new_node=new_node->next;
         	count++;
         }
    }
    return "NO"; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,x,y;//n_cities,k_jump_radius,X_current_city_position,y_required_city:
        cin>>n>>k>>x>>y;
        Node*head=NULL;
        for(int i=x;i<=n;i++){
        	createLinkedList(&head,i);
        }
        for(int i=1;i<x;i++){
        	createLinkedList(&head,i);
        }
        string str=searchLinkedList(head,y,k);
        cout<<str<<endl;
	}
}