#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
      public:
             int data;
             Node* next;
             
             
            Node(int data){
                     this->data=data;
                     this->next=NULL;
                     }
            ~Node(){
                int value=this->data;
                //memory free
                if(this->next!=NULL){
                    delete next;
                    this->next=NULL;
                }
                
            }         
                     
}  ;   

void print(Node* &head){
    //Printing the linked list
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}


void InsertH(Node* &head,int d){
   //Inserting at head
    Node* new1=new Node(d);
    new1->next=head;
    head=new1;

}



void InsertT(Node* &tail, int d){
    //inserting at tail
    Node* new1=new Node(d);
    tail->next=new1;
    tail=new1;
}

void InsertP(Node* &head,Node* &tail,int posi, int d){
    //Inserting at a posi
    Node* temp=head;
    int cnt=1;
    while(cnt<(posi-1)){
        temp=temp->next;
        cnt=cnt+1;
    }

    //if inserting at last node
    if(temp->next==NULL){
        InsertT(tail,d);
    }
    else {
    Node* new1=new Node(d);

    new1->next=temp->next;
    temp->next=new1;
    }
}

void Delete(int position, Node* &head,Node* &tail){
    //deleting first node    
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //Deleting middle node or last node
        Node* prev=NULL;
        Node* curr=head;

        int cnt=1;

        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){ //to check if it is the last node that we are deleting
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

int main(){
    Node* node1=new Node(10);
   // cout<<node1->data<<endl;
   // cout<<node1->next<<endl;

    Node* head =node1;
    Node* tail=node1;
    print(head);
    cout<<endl;

    InsertH(head,15);
    
    InsertH(head,250);
    InsertT(tail,20);
    InsertT(tail,25);
    InsertT(tail,30);
    InsertH(head,1);
    InsertT(tail,500);

    InsertP(head,tail,3,50);
    InsertP(head,tail,5,800);
    InsertP(head,tail,10,900);
    InsertP(head,tail,12,77);
    cout<<"\n BEFORE DELETION--";
    print(head);
    cout<<"\n AFTER DELETION--";
    Delete(5,head,tail);

    print(head); 
    return 0;
}       
