#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val){
        node* n= new node(val);
        if(head==NULL){ 
            head=n;//If linked list is empty
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        //n->next=NULL;//Already,node next is null. 
}
void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* swapNodes(node* &head, int k) {
        int len=0;
        node *temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        int len2=len-k+1;
        temp=head;
        node *p=head;
        while(k>1){
            temp=temp->next;
            k--;
        }
        while(len2>1){
            p=p->next;
            len2--;
        }
        int val=temp->data;
        temp->data=p->data;
        p->data=val;
        
        return head;
    }
  node* reverseKGroup(node* &head, int k) {
        if(head->next==nullptr || head==nullptr || k==1) return head;
       node* p= head;
        node* q=head;
        while(k-1){
            q=q->next;
            --k;
        }
        cout<<"The value is"<<endl;
        cout<<q->data<<endl;
        if(k%2==0){
            for(int i=1;i<k/2;i++){
                int val=p->data;
                p->data=q->data;
                q->data=val;
            }
        }
        else{
            for(int i=1;i<=k/2;i++){
                int val=p->data;
                p->data=q->data;
                q->data=val;
            }
        }       
        return head;
    }

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    swapNodes(head, 2);
    display(head);
    reverseKGroup(head,2);
     display(head);
    return 0;
}