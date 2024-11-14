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






// <--------------------------------------------------Questions-------------------------------------------------------------->

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

// node* segregateEvenOdd(node* head) {
//     if (!head || !head->next) return head;

//     node* curr = head;
//     while (curr->next != NULL) {
//         curr = curr->next;
//     }

//     node* last = curr;
//     node* temp = head;
//     node* prev = NULL;

//     while (temp != NULL) {
//         if (temp->data % 2 != 0) {  // If it's an odd node
//             if (prev) {
//                 prev->next = temp->next;  // Remove the odd node
//             } else {
//                 head = temp->next;  // If the head is odd, update it
//             }

//             last->next = temp;  // Append odd node to the end
//             last = temp;  // Update the last pointer
//             temp = temp->next;  // Move to the next node
//             last->next = NULL;  // Ensure the last node's next is NULL
//         } else {
//             prev = temp;  // Update the previous node to the current node
//             temp = temp->next;  // Move to the next node
//         }
//     }

//     return head;
// }

// node* segregateEvenOdd(node* head) {
//     node *os = NULL, *oe = NULL, *es = NULL, *ee = NULL;
//     for (node* curr = head; curr != NULL; curr = curr->next) {
//         int x = curr->data;
//         if (x % 2 == 0) {
//             if (es == NULL) {
//                 es = curr;
//                 ee = curr;
//             } else {
//                 ee->next = curr;
//                 ee = ee->next;
//             }
//         } else {
//             if (os == NULL) {
//                 os = curr;
//                 oe = curr;
//             } else {
//                 oe->next = curr;
//                 oe = oe->next;
//             }
//         }
//     }
//     if(os==NULL || es==NULL){
//         return head;
//     }
//     ee->next=os;
//     oe->next=NULL;
//     return es;
// }


// node* getIntersection(Node* head1, Node* head2) { 
//         unordered_set<node*> s;
//         node* curr=head1;
//         while(curr!=NULL){
//             s.insert(curr);
//             curr=curr->next;
//         }
//         curr=head2;
//         while(curr!=NULL){
//             if(s.find(curr)!=s.end()){
//                 return curr;
//                 break;
//             }
//             curr=curr->next;
//         }
//         return NULL;
// } 


// int getCount(node* head) {
//     int count = 0;
//     node* curr = head;
//     while (curr != NULL) {
//         count++;
//         curr = curr->next;
//     }
//     return count;
// }
// node* getintersectionPoint(int d, node* head1, node* head2) {
//     node* curr1 = head1;
//     node* curr2 = head2;
//     for (int i = 0; i < d; i++) {
//         if (curr1 == NULL) {
//             return NULL;
//         }
//         curr1 = curr1->next;
//     }
//     while (curr1 != NULL && curr2 != NULL) {
//         if (curr1 == curr2) {
//             return curr1;
//         }
//         curr1 = curr1->next;
//         curr2 = curr2->next;
//     }
//     return NULL;
// }
// node* getIntersection(node* head1, node* head2) {
//     int c1 = getCount(head1);
//     int c2 = getCount(head2);
//     int d = abs(c1 - c2);
//     if (c1 > c2) {
//         return getintersectionPoint(d, head1, head2);
//     } else {
//         return getintersectionPoint(d, head2, head1);
//     }
// }

// node* pairWiseSwap(node* head) {
//     node* curr=head;
//     while(curr!=NULL && curr->next!= NULL){
//         swap(curr->data,curr->next->data);  //but this solution did not swap node 
//         curr= curr->next->next;             //swap only data of node
//     }
//     return head ;
// }

// node* pairWiseSwap(node* head) {
//     if(head==NULL && head->next==NULL){
//         return head;
//     }
//     node* curr= head->next->next;
//     node* prev= head;
//     head=head->next;
//     head->next=prev;
//     while(curr!=NULL && curr->next!=NULL){
//         prev->next=curr->next;
//         prev=curr;
//         node* next=curr->next->next;
//         curr->next->next=curr;
//         curr=next;
//     }
//     prev->next=curr;
//     return head;
// }
 

//  doublylinklist questions

// //  clone method01-->
// node* clone(node* head1){
//     unordered_map<node*,node*>m;
//     for(node* curr=head1;curr!=NULL;curr=curr->next){
//         m[curr]=new node(curr->data);
//     }
//     for(node* curr=head1;curr!=NULL;curr=curr->next){
//         m[curr].next=m[curr->next];
//         m[curr].random=m[curr->random];
//     }
//     return m[h1];
// }

// //clone method02-->
// node* clone(node* head){
//     node* curr= head;
//     while(curr!=NULL){
//         node* next=curr->next;
//         curr->next=new node(curr->data);
//         curr->next->next=next;
//         curr=next;
//     }
//     for(node* curr=head;curr!=NULL;curr=curr->next->next){
//         curr->next->random=(curr->random==NULL)? NULL: curr->random->next;
//     }
//     node* clone_head=head->next;
//     node* clonee=clone_head;
//     for(node* curr=head;curr!=NULL;curr=curr->next){
//         curr->next= curr->next->next;
//         clone->next= clone->next ? clone->next->next : NULL;
//         clone=clone->next;
//     }
//     return clone_head;
// }

// mst question 😎
// class Node { 
//     public:
// 	int key; 
// 	int value; 
// 	Node *pre; 
// 	Node *next; 

	
// 	Node(int k, int v) 
// 	{ 
// 		key = k; 
// 		value = v;
// 		pre=NULL;next=NULL;
// 	} 
// }; 

// class LRUCache {
//     public:
// 	unordered_map<int, Node*> map; 
// 	int capacity, count; 
// 	Node *head, *tail; 
	
// 	LRUCache(int c) 
// 	{ 
// 		capacity = c; 
// 		head = new Node(0, 0); 
// 		tail = new Node(0, 0); 
// 		head->next = tail; 
// 		tail->pre = head; 
// 		head->pre = NULL; 
// 		tail->next = NULL; 
// 		count = 0; 
// 	} 

// 	void deleteNode(Node *node) 
// 	{ 
// 		node->pre->next = node->next; 
// 		node->next->pre = node->pre; 
// 	} 

// 	void addToHead(Node *node) 
// 	{ 
// 		node->next = head->next; 
// 		node->next->pre = node; 
// 		node->pre = head; 
// 		head->next = node; 
// 	} 
 
// 	int get(int key) 
// 	{ 
// 		if (map[key] != NULL) { 
// 			Node *node = map[key]; 
// 			int result = node->value; 
// 			deleteNode(node); 
// 			addToHead(node); 
// 			cout<<"Got the value : " << 
// 				result << " for the key: " << key<<endl; 
// 			return result; 
// 		} 
// 		cout<<"Did not get any value" <<
// 							" for the key: " << key<<endl; 
// 		return -1; 
// 	} 

// 	void set(int key, int value) 
// 	{ 
// 		cout<<"Going to set the (key, "<< 
// 			"value) : (" << key << ", " << value << ")"<<endl; 
// 		if (map[key] != NULL) { 
// 			Node *node = map[key]; 
// 			node->value = value; 
// 			deleteNode(node); 
// 			addToHead(node); 
// 		} 
// 		else { 
// 			Node *node = new Node(key, value); 
// 			map[key]= node; 
// 			if (count < capacity) { 
// 				count++; 
// 				addToHead(node); 
// 			} 
// 			else { 
// 				map.erase(tail->pre->key); 
// 				deleteNode(tail->pre); 
// 				addToHead(node); 
// 			} 
// 		} 
// 	} 
// }; 

// int main(){
//     { 
		
// 		LRUCache cache(2); 

// 		// it will store a key (1) with value 
// 		// 10 in the cache. 
// 		cache.set(1, 10); 

// 		// it will store a key (2) with value 20 in the cache. 
// 		cache.set(2, 20); 
// 		cout<<"Value for the key: 1 is " << cache.get(1)<<endl; // returns 10 

// 		// removing key 2 and store a key (3) with value 30 in the cache. 
// 		cache.set(3, 30); 

// 		cout<<"Value for the key: 2 is " << 
// 				cache.get(2)<<endl; // returns -1 (not found) 

// 		// removing key 1 and store a key (4) with value 40 in the cache. 
// 		cache.set(4, 40); 
// 		cout<<"Value for the key: 1 is " << 
// 			cache.get(1)<<endl; // returns -1 (not found) 
// 		cout<<"Value for the key: 3 is " << 
// 						cache.get(3)<<endl; // returns 30 
// 		cout<<"Value for the key: 4 is " << 
// 						cache.get(4)<<endl; // return 40 
						
// 		return 0;
// 	} 
// }

// node* sortedMerge(node* head1, node* head2) {
//     if (head1 == NULL) return head2;
//     if (head2 == NULL) return head1;

//     node* head = NULL;
//     node* prev = NULL;

//     if (head1->data < head2->data) {
//         head = head1;
//         prev = head1;
//         head1 = head1->next;
//     } else {
//         head = head2;
//         prev = head2;
//         head2 = head2->next;
//     }

//     while (head1 != NULL && head2 != NULL) {
//         if (head1->data <= head2->data) {
//             prev->next = head1;
//             prev = head1;
//             head1 = head1->next;
//         } else {
//             prev->next = head2;
//             prev = head2;
//             head2 = head2->next;
//         }
//     }

//     if (head1 == NULL) {
//         prev->next = head2;
//     } else {
//         prev->next = head1;
//     }

//     return head;
// }

// node* reverseList(node* head) {
//     node* prev = NULL;
//     node* curr = head;
//     node* next = NULL;
//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
// bool isPalindrome(node* head) {
//     if (head == NULL) return true;
//     node* slow = head;
//     node* fast = head;
//     while (fast->next != NULL && fast->next->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     node* rev = reverseList(slow->next);
//     node* curr = head;
//     node* tempRev = rev; 
//     while (rev != NULL) {
//         if (rev->data != curr->data) {
//             reverseList(tempRev);  
//             return false;
//         }
//         rev = rev->next;
//         curr = curr->next;
//     }
//     reverseList(tempRev);
//     return true;
// }


// ----------------------------------------------------stack----------------------------------------------------------