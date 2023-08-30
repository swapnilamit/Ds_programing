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
    void insert_at_tail(Node *&head,int val){
    Node *newNode=new Node(val);
   
    if(head==NULL){
        head=newNode;
        return;
    }
     Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
     }
     tmp->next=newNode;
     }

     void print_the_linkedlist(Node* head){
        Node*tmp=head;
        while(tmp!=NULL){
            cout<<tmp->val<<" "<<endl;
            tmp=tmp->next;

        }
     }
     void insert_at_any_position(Node*head,int pos,int val){
        Node * newNode=new Node(val);
        Node* tmp=head;
        for(int i=1;i<=pos-1;i++){
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
       


     }


int main(){
    Node*head=NULL;
     while(true){
    int op;
    cout<<"option 1: insert at tail"<<endl;
    cout<<"option 2: print the linked list"<<endl;
     cout<<"option 3: insert at any position"<<endl;
    cout<<"option 4: break break break"<<endl;
    cin>>op;
   

        if(op==1){
        cout<<"insert at tail"<<endl;
        int val;
        cout<<"enter the value:"<<endl;
        cin>>val;
        insert_at_tail(head,val);
        }
        else if(op==2){
            print_the_linkedlist(head);

        }
        else if(op==3){
            int pos,val;
            cout<<"enter the position"<<endl;
            cin>>pos;
            cout<<"enter the value"<<endl;
            cin>>val;

            insert_at_any_position(head,pos,val);
        }
        else if(op==4){
            break;
        }


    }
    return 0;
}