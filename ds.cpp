#include<bits/stdc++.h>
using namespace std;

// --------------------------------------------Linked_List------------------------------------------------------

// ----$$$ singly link list $$$-----
// simple
// void linklistcreate(){
    // node* head = new node(10);
    // node* temp1 = new node(20);
    // node* temp2 = new node(30);
    // head->next = temp1;
    // tamp1->next = temp2;
    //simplification 
    // node* head = new node(10);
    // head->next = new node(20);
    // head->next->next = new node(30);
// }

// struct node
// {
//     int data;
//     node *next;    // self refrential structure - every node has a address of next node and every node has similar data structure
//     node(int x){
//         data = x;
//         next = NULL;
//     }
// };

// void printList(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }    
//     cout<<endl;
// }

//recursive call
// void printList(node* head){
//     if(head==NULL)
//         return; 
//     cout<<(head->data)<<" ";
//     printList(head->next);
// }

// node* insertBegin(node* head,int x){
//     node* temp = new node(x);
//     temp->next = head;
//     return temp;
// }

// node* insertend(node* head,int x){
//     node* temp = new node(x);
//     if(head == NULL){
//         return temp;
//     }
//     node* curr = head;
//     whiel(curr->next != NULL){
//         curr = curr->next;
//     }
//     curr->next=temp;
//     return head;
// }

// node* insertAtpos(node* head,int x,int pos){
//     node* temp=new node(x);
//     if(pos==1){
//         temp->next=head;
//         return temp;
//     }
//     node* curr= head;
//     for(int i=0;i<pos-2 && curr->next!=NULL;i++){
//         curr=curr->next;
//     }
//     if (curr==NULL){
//         return head;
//     }
//     temp->next=curr->next;
//     curr->next=temp;
//     return head;
// }

// node* deleteBegin(node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next==NULL){
//         delete head;
//         return NULL;
//     }else{
//         node* temp=head;
//         head=head->next;
//         delete temp;
//         return head;
//     }
// }

// node* deleteEnd(node* head){
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
//     node* curr= head;
//     while(curr->next->next!=NULL){
//         curr=curr->next;
//     }
//     delete(curr->next);
//     curr->next=NULL;
//     return head;
// }

// int  search(node* head,int key){
//     node* curr=head;
//     for(int i=1;curr!=NULL;i++){
//         if (curr->data==key){
//             return i;
//         }
//         curr=curr->next; 
//     }
//     return -1;
// }

// recursive search
// int  search(node* head,int key){
//     if(head==NULL)return -1;
//     if(head->data==key){
//         return i;
//     }else{fedee                                                 
//         int res=search(head->next,key);
//         if(res==-1)return -1;
//         else return (res+1);
//     }
// }

// bool detectLoop(node* head) {            // but for this solution we need to modify the struc of the link list 
//     node* curr = head;                   //struct node {
//     while (curr != NULL) {               //    int data;
//         if (curr->visited) {             //    bool visited;
//             return true;                 //    node* next;   
//         } else {                         //    node(int x) {
//             curr->visited = true;        //        data = x;
//         }                                //        visited = false;
//         curr = curr->next;               //        next = NULL;
//     }                                    //    }
//     return false;                        // };
// }

// bool detectLoop(node* head){
//     node* temp=new node;
//     node* curr=head;
//     while(curr!=NULL){
//         if(curr->next==NULL){
//             return false;
//         }
//         if(curr->next==temp){                 //but this solution break link list 
//             return true;
//         }
//         node* curr_next=curr->next;
//         curr->next=temp;
//         curr=curr_next;
//     }
//     return false;
// }

// bool detectLoop(Node* head) {
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next != NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;
// }

// <-----Questions----->
// sorted insert in linklist
// node* insertSort(node* head, int x) {
//     node* temp=new node(x);
//     if(head==NULL) {
//         return temp;
//     }
//     if(head->data >= x) {
//         temp->next=head;
//         return temp;
//     }
//     node* curr=head;
//     while(curr->next!=NULL && curr->next->data<x) {
//         curr=curr->next;
//     }
//     temp->next=curr->next;
//     curr->next=temp; 
//     return head;
// }

// void mid(node* head) {
//     if (head == NULL) return ;
//     int count = 0;
//     node* curr = head;
//     while (curr != NULL) {
//         curr = curr->next;
//         count++;
//     }
//     curr = head;
//     count = count / 2;
//     while (count != 0) {
//         curr = curr->next;
//         count--;
//     }
//     cout<< curr->data;
// }

// void mid(node* head) {
//     if (head == NULL) return; 
//     node* slow = head,fast = head;
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     cout<< slow->data;   
// }

// void  getKthFromLast(Node *head, int k) {
//     if (head == NULL) return;
//     int count = 0;
//     Node* curr = head;
//     while (curr != NULL) {
//         curr = curr->next;
//         count++;
//     }
//     if(count < k) return ;
//     curr = head;
//     count = count - k;
//     while (count != 0) {
//         curr = curr->next;
//         count--;
//     }
//     cout<< curr->data;
// }

// using 2 pointer
// void getkthFromLast(node* head , int k){
//     if(head == NULL) return ;
//     node* first = head ;
//     node* second = head ;
//     for(int i = 0; i < k; i++){
//         second = second -> next ;
//     }
//     while(second != NULL){
//         first = first -> next;
//         second = second -> next;
//     }
//     cout<<first -> data;
// }

// node* reverse(node* head) {0se4xf
//     node* temp;
//     node* prev = NULL;
//     node* curr = head;
//     while (curr != NULL) {
//         temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//     return prev;
// }

// using recursion 
// node* reverse(node* head) {
//     if (head == NULL || head->next == NULL) {
//         return head;
//     } 
//     node* newHead = reverse(head->next);
//     node* rest_tail = head -> next;
//     rest_tail -> next = head;  
//     head->next = NULL;
//     return newHead;
// }

// node* reverse(node* head,node* prev) {
//     node* curr=head;
//     if (curr == NULL || curr->next == NULL) {
//         return curr;
//     } 
//     node* next = curr->next;
//     curr->next = prev;
//     node* newHead = reverse(next,curr);
// }

// node* rvrskgrp(node* head,int k){
//     node* curr = head, prev = NULL, next = NULL;
//     int count = 0;
//     while(curr!=NULL && count<k){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//     }
//     if(curr!=NULL){
//         node* newhead=rvrskgrp(curr,k);
//         head->next = newhead;
//     }
//     return prev;     
// }
// node* reversek(node* head , int k){
//     node* curr= head , prevfirst=NULL;
//     bool isfirstpass=true;
//     while(curr!= NULL){
//         node* first=curr,*prev=NULL;
//         int count=0;
//         while(curr!=NULL && count<k){
//             node*next = curr->next;
//             curr->next= prev;
            // prev= curr;                       //maybe it will be wrong 
//             curr=next;
//             count++;
//         }
//         if(isfirstpass){
//             head=prev;
//             isfirstpass=false;
//         }else{
//             prevfirst->next=prev;
//             prevfirst=first;
//         }
//     }
//     return head;
// }

// node* rmvdup(node* head){
    // node* curr = head;
    // while (curr != NULL && curr->next !=NULL) {
    //     if (curr->data == curr->next->data){
    //         node* temp = curr->next;
    //         curr->next = curr->next->next;
    //         delete(temp);
    //     }else{
    //         curr=curr->next;
    //     }
    // }
    // return head;
// }

// bool detectLoop(node* head) {            // but for this solution we need to modify the struc of the link list 
//     node* curr = head;                   //struct node {
//     while (curr != NULL) {               //    int data;
//         if (curr->visited) {             //    bool visited;
//             return true;                 //    node* next;   
//         } else {                         //    node(int x) {
//             curr->visited = true;        //        data = x;
//         }                                //        visited = false;
//         curr = curr->next;               //        next = NULL;
//     }                                    //    }
//     return false;                        // };
// }

// bool detectLoop(node* head){
//     node* temp=new node;
//     node* curr=head;
//     while(curr!=NULL){
//         if(curr->next==NULL){
//             return false;
//         }
//         if(curr->next==temp){                 //but this solution break link list 
//             return true;
//         }
//         node* curr_next=curr->next;
//         curr->next=temp;
//         curr=curr_next;
//     }
//     return false;
// }

// bool detectLoop(Node* head) {
//     unordered_set<node*>s; 
//     node* curr=head;
//     while(curr!=NULL){
//         if(s.find(curr)!=s.end()){
//             return true;
//         }
//         s.insert(curr);
//         curr=curr->next;
//     }
//     return false;
// }

// Floyd cycle detection

// bool detectLoop(Node* head) {
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next != NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;
// }

// void deleteNode(node* ptr){
//     node* temp=ptr->next;
//     swap(ptr->data,ptr->next->data);   //Interview question👌
//     ptr->next=temp->next;
//     delete(temp);
// }


// int main() {
//     node* head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     cout << "Before function call : ";
//     printList(head);
//     head =insertSort(head,1);
//     cout << "After function call : ";
//     printList(head);
    
//     return 0;
// }

// ----$$$ doubly link list $$$-----
// adv - 1.can be travered in both directions 2). a given delete a node in O(1) times with given reference pointer to it 3). insert/delete before a given node  4).insert/delete from both ends in O(1)times by maintaining tail.
// dis - 1.extra space for prev 2). code becomes more complex
// void linklistcreate(){
//     node* head = new node(10);
//     node* temp1 = new node(20);
//     node* temp2 = new node(30);
//     head->next = temp1;
//     temp1->prev = head;
//     tamp1->next = temp2;
//     tamp2->prev = temp1;
// }

// struct node {
//     int data;
//     node* prev;
//     node* next;
    
//     node(int x) {
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void printList(node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// node* insertBegin(node* head, int x) {
//     node* temp = new node(x);
//     temp->next = head;
//     if (head != NULL) {
//         head->prev = temp;
//     }
//     return temp;
// }

// node* insertEnd(node* head, int x) {
//     node* temp = new node(x);
//     if(head==NULL){
//         return temp;
//     }
//     node* curr = head;
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=temp;
//     temp->prev=curr;

//     return head;
// }

// node* reverse(node* head) {
//     node* temp = NULL;
//     node* curr = head; 
//     while (curr != NULL) {
//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;
//         curr = curr->prev;
//     }
//     if (temp != NULL) {
//         return temp->prev;
//     }   
//     return head;
// }

// node* deleteBegin(node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next==NULL){
//         delete head;
//         return NULL;
//     }else{
//         node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//         return head;
//     }
// }

// node* deleteEnd(node* head){
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
//     node* curr= head;
//     while(curr->next->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=NULL;
//     delete(curr->next);
//     return head;
// }


// int main() {

//     node* head = new node(10);
//     node* second = new node(20);
//     node* third = new node(30);
//     node* fourth = new node(40);
//     head->next = second;
//     second->prev = head;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;

//     cout << "Before insertion: ";
//     printList(head);
//     head = deleteEnd(head);
//     cout << "After insertion: ";
//     printList(head);
    
//     return 0;
// }
 

// ----$$$ circular single link list $$$-----
//adv:- 1)we can traverse the whole list from any node. 2)implementation of algorithm like round robin. 3)we can insert at the begining and end in O(1) by just maintaing one tail reference/position
//dis:- 1) implementation of operation become complex
// void linklistcreate(){
//     // node* head=new node(10);
//     // node* first=new node(20);
//     // node* second=new node(30);
//     // node* third=new node(40);
//     // head->next=first;
//     // first->next=second;
//     // second->next=third;
//     // third->next=head;
//     node* head=new node(10);
//     head->next=new node(20);
//     head->next->next=new node(30);
//     head->next->next->next=new node(40);
//     head->next->next->next->next=head;
// }

// struct node{
//     int data;
//     node* next;
//     node(int d){
//         data=d;
//         next=NULL;
//     }
// };

// void printList(node* head){
//     //using for loop 
//     if(head==NULL) return;
//     cout<<head->data<<" ";
//     for(node* curr=head->next ; curr!=head; curr=curr->next){
//         cout<<curr->data<<" ";
//     }
//     // node* curr=head;
//     // do {
//     //     cout<<curr->data<<" ";
//     //     curr=curr->next;
//     // } while(curr!=head); 
//     // cout<<endl;
// }

// node* insertBegin(node* head,int x){
//     // node* temp=new node(x);
//     // if(head==NULL){
//     //     temp->next= temp;
//     // }else{
//     //     node* curr=head;
//     //     while(curr->next!=head){
//     //     curr=curr->next;
//     //     }
//     //     curr->next=temp;
//     //     temp->next=head;
//     // }
//     // return temp;
// }

//insert at second position and swap with head ---O(1)
// node* insertBegin(node* head,int x){
//     node* temp=new node(x);
//     if(head==NULL){
//         temp->next= temp;
//         return temp;
//     }else{                                            //op😊 
//         temp->next=head->next;
//         head->next=temp;
//         swap(temp->data, head->data);
//         return head;
//     }
// }

// node* insertEnd(node* head,int x){
//    node* temp=new node(x);
//    if(head==NULL){
//     temp->next=temp;
//     return temp;
//    }else{
//         temp->next=head->next;
//         head->next=temp;
//         swap(head->data,temp->data);
//         return temp;
//     }
// }

// node* deleteBegin(node* head){
//    if(head==NULL){
//     return NULL;
//    }
//    if(head->next==NULL){
//     delete head;
//     return NULL;
//    }
//     swap(head->data,head->next->data);
//     node* temp=head->next;
//     head->next=head->next->next;
//     delete temp;
//     return head;
// }

// node* deletekth(node* head,int k){
//     if(head==NULL){
//         return NULL;
//     }
//     if(k==1){
//         return deleteBegin(head);
//     }
//     node* curr= head;
//     for(int i=0;i<k-2;i++){
//         curr=curr->next;
//     }
//     node* temp = curr->next;
//     curr->next=curr->next->next;
//     delete(temp);
//     return head;
// }


// int main(){
//     node* head=new node(10);
//     head->next=new node(20);
//     head->next->next=new node(30);
//     head->next->next->next=new node(40);
//     head->next->next->next->next=head;
//     cout << "Before function call: ";
//     printList(head);
//     head =  deletekth(head,1);
//     cout << "After function call: ";
//     printList(head);
//     return 0;
// }


// ----$$$ circular doubly link list $$$-----
// adv:- 1)all adv of circular && all adv of doubly. 2)we can access last node in constant time without maintaing extra tail pointer/refrences.

// struct node {
//     int data;
//     node* next;
//     node* prev;
//     node(int d){
//         data=d;
//         next=NULL;
//         prev=NULL;
//     }
// };

// void printList(node* head){
//     if(head==NULL)return;
//     cout<<head->data<<" ";
//     for(node* curr=head->next;curr!=head;curr=curr->next) {
//         cout<<curr->data<<" ";
//     }
//     cout<<endl;
// }

// node* insertBegin(node* head, int x){
//     node* temp=new node(x);
//     if(head==NULL){
//         temp->next=temp;
//         temp->prev=temp;
//         return temp;
//     }else{
//         temp->next=head;
//         temp->prev=head->prev;
//         head->prev->next=temp;
//         head->prev=temp;
//         return temp;
//     }
// }

// node* insertEnd(node* head, int x){
//     node* temp=new node(x);
//     if(head==NULL){
//         temp->next=temp;
//         temp->prev=temp;
//         return temp;
//     }else{
//         temp->next=head;
//         temp->prev=head->prev;
//         head->prev->next=temp;
//         head->prev=temp;
//         return head;
//     }
// }

// int main() {
//     node* head = new node(10);
//     node* temp1 = new node(20);
//     node* temp2 = new node(30);
//     head->next = temp1;
//     temp1->prev = head;
//     temp1->next = temp2;
//     temp2->prev = temp1;
//     temp2->next = head; 
//     head->prev = temp2; 

//     cout<<"Before function call: ";
//     printList(head);
//     head=insertEnd(head, 100);
//     cout<<"After function call: ";
//     printList(head);

//     return 0;
// }

