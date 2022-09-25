#include "bits/stdc++.h"
using namespace std;

class Node{
public:
    string name;
    int age;
    Node* prev;
    Node* next;
    Node(string s,int a){
        age = a;
        name = s;
        prev = NULL;
        next = NULL;
    }
};

void pushBack(Node*& head,Node*& curr){
    if(head==NULL){
        head = curr;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = curr;
    curr->prev = temp;
    return ;
}

void printFamily(Node* head){
    while(head!=NULL){
        cout<<head->name<<" "<<head->age<<endl;
        head = head->next;
    }
    return ;
}

signed main(){
    Node* head = NULL;
    int n;
    cout<<"Enter the number of family members:  ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string s;
        cout<<"Enter the name of  member: ";
        cin>>s;
        cout<<"Enter the age of member: ";
        cin>>a;
        Node* curr = new Node(s,a);
        pushBack(head,curr);
    }
    printFamily(head);
    return 0;
}