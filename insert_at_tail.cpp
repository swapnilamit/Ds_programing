#include<bits/stdc++.h>
using namespace std;
class Node{
public:
 int val;
 Node *next;
 Node(int val){
    this->val=val;
    this->next=NULL;
 }

};
void ptint_linked_list(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" "<<endl;
        tmp=tmp->next;
    }
}
void insert_at_tail(Node *&head,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
int main(){
Node *head=NULL;
while(true){
int op;
cout<<"option 1 : insert at tail"<<endl;
cout<<"option 2 : print"<<endl;
cout<<"option 3 : terminate"<<endl;
cin>> op;
if (op==1){
    int v;
    cout<<"insert a element"<<endl;
    cin>>v;
    insert_at_tail(head,v);

}

else if(op==2){
    ptint_linked_list(head);
}
else if (op==3){
    break;
}
}

    return 0;
}