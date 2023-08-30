
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
void print_reverse(Node *n){
    if(n==NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
int main(){
int x,y,a,b,c;
cout<<"last two digit of your id "<<endl;
cin>>a;
x=a%10;
cout<<"first two digit of your id "<<endl;
cin>>b;
cout<<"last digit of your id"<<endl;
cin>>c;
y=(b%10)+c;
Node *head=new Node(x+1);
Node *g=new Node(y+20);
Node *h=new Node(x+3);
Node *i=new Node(x+4);
Node *j=new Node(y+50);
Node *k=new Node(y+60);
head->next=g;
g->next=h;
h->next=i;
i->next=j;
j->next=k;
print_reverse(head);
return 0;
}
