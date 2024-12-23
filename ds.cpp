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
// 5 main operation on stack is ---> timeComplexity of all 5 operation is O(1)
// 1.isEmpty()-->return boolean value
// 2.push(x)-->push x in stack 
// 3.pop()--->pop top of the element from stack 
// 4.peek()---> return top element
// 5.size()-->return size of stack
// underflow : when pop() or peek() called on empty stack
// overflow : when push() called on a full stack -->not common
//application-->
//function call : 
//balanced parenthesis :
//reversing items :
//infix to postfix/prefix :
//evaluation of postfix/prefix :
//stack span problem :
//undo/redo or forward/backward : using two stack 

// array implementation of stack 
//problem-
// 1.doesn't handle overflow and underflow
// 2.need to provide cap intially no dynamic resizing
// struct MyStack{
//     int *arr;
//     int cap;
//     int top;
//     MyStack(int c){
//         cap=c;
//         arr=new int[cap];
//         top=-1;
//     }
//     void push(int x){
//         if(top==cap-1){
//             cout<<"stack bhr gya😊"<<endl;
//         }
//         top++;
//         arr[top]=x; 
//     }
//     int pop(){
//         if(top==-1){
//             cout<<"stack khali hai😊"<<endl;
//         }
//         int res=arr[top];
//         top--;
//         return res;
//     }
//     int peek(){
//         if(top==-1){
//             cout<<"stack khali hai😊"<<endl;
//         }
//         return arr[top];
//     }
//     int size(){
//         return (top+1);
//     }
//     bool isEmpty(){
//         return (top==-1);
//     }
// }

// struct MyStack{
//     vector<int> v;
//     void push(int x){
//         v.push_back(x);
//     }
//     int pop(){
//         int res=v.back();
//         v.pop_back();
//         return res;
//     }
//     int peek(){
//         return v.back();
//     }
//     int size(){
//         return v.size();
//     }
//     bool isEmpty(){
//         return v.empty();
//     }
// }


// linked list implementation of stack 

// struct node
// {
//     int data;
//     int *next;
//     int node(int d){
//         data=d;
//         next=NULL;
//     }
// };

// struct MyStack
// {
//     node* head;
//     int sz;
//     MyStack(){
//         head=NULL;
//         sz=0;
//     }
//     void push(int x){
//         node* temp = new node(x);
//         temp->next=head;
//         head=temp;
//         sz++;
//     }
//     int pop(){
//         if(head==NULL){
//             cout<<"stack khali hai bhai"<<endl;
//         }
//         int res=head->data;
//         node* temp=head;
//         head=head->next;
//         delete(temp);
//         sz--;
//         return res;
//     }
//     int size(){
//         return sz;
//     }
//     bool isEmpty(){
//         return head==NULL;
//     }
//     int peek(){
//         if(head==NULL){
//             cout<<"khali hai bhai"<<endl;
//         }
//         return head->data;
//     }
// };

// stack in c++ stl
//              |___container adapter - queue and priority queue is also container adapter 
// Internal working : stack can be implemented on any underlying container that provides following operation
//                  |__back()
//                  |__size()
//                  |__empty()
//                  |__push_back()
//                  |__pop_back()
// stack < int > s;
// // eg:
// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(s.empty==false){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;   
// }

// Question

// bool matching(char s , char t){
//     return ((s=='(' && t==')') || (s=='[' && t==']') || (s=='{' && t=='}')); 
// }
// bool isParenthesisBalanced(string& s) {
//     stack<char>st;
//     for(char x:s){
//         if(x=='(' || x=='[' || x=='{') st.push(x);
//         else{
//             if(st.empty()) return false;
//             if(matching(st.top(),x)) st.pop();
//             else return false;
            
//         }

//     }
//     return st.empty();
// }

// class twoStacks {
// public:
//     int *arr;
//     int cap, top1, top2;

//     // Default constructor with a default capacity of 100
//     twoStacks() {
//         cap = 100; // Default capacity
//         top1 = -1;
//         top2 = cap;
//         arr = new int[cap];
//     }

//     // Constructor with a specific capacity
//     twoStacks(int n) {
//         cap = n;
//         top1 = -1;
//         top2 = n;
//         arr = new int[n];
//     }

//     // Function to push an integer into stack1
//     void push1(int x) {
//         if (top1 < top2 - 1) {
//             top1++;
//             arr[top1] = x;
//         } else {
//             cout<< -1<<endl;
//         }
//     }

//     // Function to push an integer into stack2
//     void push2(int x) {
//         if (top1 < top2 - 1) {
//             top2--;
//             arr[top2] = x;
//         } else {
//             cout<<-1<<endl;
//         }
//     }

//     // Function to remove an element from top of stack1
//     int pop1() {
//         if (top1 >= 0) {
//             int x = arr[top1];
//             top1--;
//             return x;
//         } else {
//             return -1;
//         }
//     }

//     // Function to remove an element from top of stack2
//     int pop2() {
//         if (top2 < cap) {
//             int x = arr[top2];
//             top2++;
//             return x;
//         } else {
//             return -1;
//         }
//     }
// };

// class kStacks{
// public:
//     int *arr, *top , *next;
//     int k,cap, freeTop;
//     // Constructor with a specific capacity
//     kStacks(int k1,int n) {
//         k=k1; 
//         cap = n;
//         freeTop=0;
//         arr = new int[cap];  //array
//         top = new int[k];    //top of size is equal to number of stack which represente index of top of the element 
//         next = new int[cap]; //point to next element after stack top //point to next free space        
//         for(int i=0;i<k;i++){
//             top[i]=-1;
//         }
//         for(int i=0;i<cap-1;i++){
//             next[i]=i+1;
//         }
//         next[cap-1]=-1;
//     }
//     bool isFull(){return freeTop==-1;}
//     bool isEmpty(int sn){return top[sn]==-1;}

//     // Function to push an integer into stack
//     void push1(int x,int sn) {
//         if (isFull()) {
//             cout<< " stack overflow "<<endl;
//             return ;
//         }
//         int i=freeTop;    // find index ->jisme value insert karengye
//         freeTop=next[i];  // update freetop -->next value kha insert karengye
//         arr[i]=x;         // value inserted
//         next[i]=top[sn];  // after  value inserted next value show prev top
//         top[sn-1]=i;      // show index of top of the element of that stack 
//     }
//     // Function to pop an integer into stack
//     int pop1(int sn) {
//         if (isEmpty(sn)) {
//             cout<< " stack underflow "<<endl;
//             return INT_MAX;
//         }
//         int i = top[sn-1]; //reverse of push
//         top[sn-1]=next[i];
//         next[i]=freeTop;
//         freeTop=i;
//         return arr[i];
//     }
// };

// vector<int> calculateSpan(vector<int>& arr) {
//     stack<int> s;
//     vector<int> ans;
//     int n = arr.size();
//     for (int i = 0; i < n; i++) {
//         while (!s.empty() && arr[s.top()] <= arr[i]) {
//             s.pop();
//         }
//         int span = s.empty() ? i + 1 : i - s.top();
//         ans.push_back(span);
//         s.push(i);
//     }
//     return ans;
// } 

// vector<int> previousGreater(vector<int>& arr) {
//     stack<int> s;
//     int n = arr.size();
//     vector < int > ans(n);
//     for (int i = 0; i < n; i++) {
//         while (!s.empty() && s.top() <= arr[i]) {
//             s.pop();
//         }
//         ans[i] = s.empty() ? -1 : s.top();
//         s.push(arr[i]);
//     }
//     return ans;
// }

// vector<int> nextGreater(vector<int>& arr) {
//     stack<int> s;
//     int n = arr.size();
//     vector<int> ans(n); 
//     for (int i = n - 1; i >= 0; i--) { 
//         while (!s.empty() && s.top() <= arr[i]) {
//             s.pop();
//         }
//         ans[i] = s.empty() ? -1 : s.top();
//         s.push(arr[i]);
//     }
//     return ans;
// }

// naive solution for Histogram Max Rectangular Area problem 

// long long getMaxArea(vector<long long> &hist) {
//     int res=0;
//     for(int i=0;i<hist.size();i++){
//         int curr=hist[i];
//         for(int j=i-1;j>=0;j--){
//             if(hist[j]>=hist[i]){
//                 curr+=hist[i];
//             }else{
//                 break;
//             }
//         }
//         for(int j=i+1;j<n;j++){
//             if(hist[j]>=hist[i]){
//                 curr+=hist[i];
//             }else{
//                 break;
//             }
//         }
//         res=max(res,curr)
//     }
// }

// // Efficient solution 

// long long getMaxArea(vector<long long>& hist) {
//     int n = hist.size();
//     stack<int> sl;
//     vector<int> left(n); 
//     for (int i = 0; i < n; i++) {
//         while (!sl.empty() && hist[sl.top()] >= hist[i]) {
//             sl.pop();
//         }
//         left[i] = sl.empty() ? -1 : sl.top();
//         sl.push(i);
//     }
    
//     stack<int> sr;
//     vector<int> right(n); 
//     for (int i = n - 1; i >= 0; i--) {
//         while (!sr.empty() && hist[sr.top()] >= hist[i]) {    //all concept of stack used in this question..😎
//             sr.pop();
//         }
//         right[i] = sr.empty() ? n : sr.top();
//         sr.push(i);
//     }   
//     long long ans = 0;
//     for (int i = 0; i < n; i++) {
//         long long width = right[i] - left[i] - 1;
//         ans = max(ans, width * hist[i]);
//     } 
//     return ans;
// }

// more efficient solution use only one stack 
// long long getMaxArea(vector<long long>& hist) {
//     int n = hist.size();
    
//     stack<int> s;
//     long long res = 0, tp, curr;
//     for (int i = 0; i < n; i++) {
//         while (!s.empty() && hist[s.top()] >= hist[i]) {
//             tp = s.top();
//             s.pop();
//             curr = hist[tp] * (s.empty() ? i : (i - s.top() - 1));  //difficult to digest 
//             res = max(res, curr);
//         }
//         s.push(i);
//     }

//     while (!s.empty()) {
//         tp = s.top();
//         s.pop();
//         curr = hist[tp] * (s.empty() ? n : (n - s.top() - 1));
//         res = max(res, curr);
//     }
//     return res;
// }


// MAX rectangle problem -Given a binary matrix M of size n X m. Find the maximum area of a rectangle formed only of 1s in the given matrix.

// class Solution{
//   public:
  
//     long long getMaxArea(vector<long long>& hist) {
//         int n = hist.size();
//         stack<int> s;
//         long long res = 0, tp, curr;
    
//         for (int i = 0; i < n; i++) {
//             while (!s.empty() && hist[s.top()] >= hist[i]) {
//                 tp = s.top();
//                 s.pop();
//                 curr = hist[tp] * (s.empty() ? i : (i - s.top() - 1));
//                 res = max(res, curr);
//             }
//             s.push(i);
//         }
//         while (!s.empty()) {
//             tp = s.top();
//             s.pop();
//             curr = hist[tp] * (s.empty() ? n : (n - s.top() - 1));
//             res = max(res, curr);
//         }
//         return res;
//     }
    
//     int maxArea(int M[MAX][MAX], int n, int m) {
//         vector<long long> hist(m, 0); 
//         long long res = 0; 
    
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 hist[j] = (M[i][j] == 0) ? 0 : hist[j] + 1; \
//             }
//             res = max(res, getMaxArea(hist)); 
//         }
//         return (int)res; 
    
//     }

// };


// class Solution {          
//     stack<int> s;         
//     stack<int> as;         
// public:
//     int getMin() {
//         if (as.empty()) return -1; 
//         return as.top();            
//     }
//     int pop() {
//         if (s.empty()) return -1;  
//         int topElement = s.top();   
//         s.pop();                    
//         if (topElement == as.top()) {
//             as.pop();               
//         }
//         return topElement;
//     }
//     void push(int x) {
//         s.push(x);                  
//         if (as.empty() || x <= as.top()) {
//             as.push(x);             
//         }
//     }
// };



// int prec(char c) {
//     if (c == '^')
//         return 3;
//     else if (c == '/' || c == '*')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }

// bool isLeftAssociative(char c) {
//     return c != '^';
// }

// void infixToPostfix(string s) {
//     stack<char> st;
//     string result;
//     for (int i = 0; i < s.length(); i++) {
//         char c = s[i];
//         if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
//             result += c;

//         else if(c == '(')
//             st.push('(');

//         else if(c == ')') {
//             while(st.top() != '(') {
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }

//         else{
//             while(!st.empty() && (prec(c)< prec(st.top()) || (prec(c) == prec(st.top()) && isLeftAssociative(c)))) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }

//     while (!st.empty()) {
//         result += st.top();
//         st.pop();
//     }

//     cout << result << endl;
// }

// Function to convert an infix expression to a postfix expression.
//  int prec(char c) {
//     if (c == '^')
//         return 3;
//     else if (c == '/' || c == '*')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }

// string infixToPostfix(string& s) {
//     stack<char> st;
//     string result;
//     for (int i = 0; i < s.length(); i++) {
//         char c = s[i];
        
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//             result += c;
        
//         else if(c == '(')
//             st.push('(');
        
//         else if(c == ')') {
//             while(!st.empty() && st.top() != '(') {
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
        
//         else {
//             while(!st.empty() && prec(c) <= prec(st.top())) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
    
//     while(!st.empty()) {
//         result += st.top();
//         st.pop();
//     }
    
//     return result;
// }



// int evaluationOfPostfix(string s) {
//     stack<int> st;

//     for (int i = 0; i < s.length(); i++) {
//         if (isdigit(s[i])) {
//             st.push(s[i] - '0');    //why sub - "0" - reason : char'0'has ASCII value 48 and to char digit into int subs - '0'
//         } else {                    // ex: To Convert char '3'--> int 3 : char 3 has ascii 51 and subs char 0 whose ascii value 48 obtain int 3 
//             int opr1 = st.top();
//             st.pop();
//             int opr2 = st.top();
//             st.pop();

//             switch (s[i]) {
//                 case '^':
//                     st.push(pow(opr2, opr1));
//                     break;
//                 case '*':
//                     st.push(opr2 * opr1);
//                     break;
//                 case '/':
//                     st.push(opr2 / opr1);
//                     break;
//                 case '+':
//                     st.push(opr2 + opr1);
//                     break;
//                 case '-':
//                     st.push(opr2 - opr1);
//                     break;
//                 default:
//                     return -1;
//             }
//         }
//     } 
//         return st.top();
// }



// Function to convert infix expression to prefix

// int prec(char c) {
//     if (c == '^')
//         return 3;
//     else if (c == '*' || c == '/')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }
// void infixToPrefix(string s) {
//     stack<char> st;
//     string result;
//     for (int i = s.length() - 1; i >= 0; i--) {
//         char c = s[i];
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//             result += c;

//         else if (c == ')')
//             st.push(')');

//         else if (c == '(') {
//             while (st.top() != ')') {
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else {
//             while (!st.empty() && prec(c) <= prec(st.top())) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
//     while (!st.empty()) {
//         result += st.top();
//         st.pop();
//     }
//     reverse(result.begin(), result.end());
//     cout << "Prefix Expression: " << result << endl;
// }



// int evaluationOfPrefix(string s) {
//     stack<int> st;
//     for (int i = s.length(); i >= 0; i--) {
//         if (isdigit(s[i])) {
//             st.push(s[i] - '0');    
//         } else {                    
//             int opr1 = st.top();
//             st.pop();
//             int opr2 = st.top();
//             st.pop();
//             switch (s[i]) {
//                 case '^':
//                     st.push(pow(opr2, opr1));
//                     break;
//                 case '*':
//                     st.push(opr2 * opr1);
//                     break;
//                 case '/':
//                     st.push(opr2 / opr1);
//                     break;
//                 case '+':
//                     st.push(opr2 + opr1);
//                     break;
//                 case '-':
//                     st.push(opr2 - opr1);
//                     break;
//                 default:
//                     return -1;
//             }
//         }
//     } 
//         return st.top();
// }

// --------------------------------------------------Queue-------------------------------------------------------------
// dequeue ----> ] [Front] [][][] [Rear] [ <---- enqueue  #FIFO 
// operation:- enqueue(x),dequeue(),getFront(),getRear(),size(),isEmpty() etc.
// application:- 
// a) single resource and multiple consumers  e.g ticket system 
// b) synchronization between slow and fast device 
// c) in operating system (semaphores,fcfs,spooling , buffers for device like keyword )
// d) in computer network (routers/switches and mail queues)
// e) variations :  deque , priority queue and doubly ended priority queue


// struct Queue{
//     int *arr;
//     int cap,size;

//     Queue(int c){
//         cap=c;
//         size=0;
//         arr=new int[cap];
//     }

//     bool isFull() {return (size==cap);}
//     bool isEmpty() {return (size==0);}

//     void enqueue(int x){
//         if(isFull){
//             cout<<"Queue bhr gya😊"<<endl;
//             return;
//         }
//         arr[size]=x; 
//         size++;
//     }
//     void dequeue(){
//         if(isEmpty){
//             cout<<"Queue khali hai😊"<<endl;
//             return;
//         }
//         for(int i = 0; i < size-1; i++){
//             arr[i]=arr[i+1];
//         }
//         size--;
//     }
//     int getFront(){
//         if(isEmpty){
//             cout<<"stack khali hai😊"<<endl;
//             return -1;
//         }else{
//             return 0;
//         }
//     }
//     int getRear(){
//         if(isEmpty){
//             cout<<"stack khali hai😊"<<endl;
//             return -1;
//         }else{
//             return size-1;
//         }
//     }

// }

// using circular array --> 0(1)=dequeue operation
// struct Queue{
//     int *arr;
//     int front,cap,size;
//     Queue(int c){
//         cap=c;
//         size=0;
//         front=0;
//         arr=new int[cap];
//     }

//     bool isFull() {return (size==cap);}
//     bool isEmpty() {return (size==0);}

//     void enqueue(int x){
//         if(isFull){
//             cout<<"Queue bhr gya😊"<<endl;
//             return;
//         }
//         int rear=getRear();
//         rear=(rear+1)%cap;
//         arr[rear]=x;
//         size++;
//     }
//     void dequeue(){
//         if(isEmpty){
//             cout<<"Queue khali hai😊"<<endl;
//             return;
//         }
//         front=front+1/cap;
//         size--;

//     }
//     int getFront(){
//         if(isEmpty){
//             cout<<"stack khali hai😊"<<endl;
//             return -1;
//         }else{
//             return front;
//         }
//     }
//     int getRear(){
//         if(isEmpty){
//             cout<<"stack khali hai😊"<<endl;
//             return -1;
//         }else{
//             return (front+size-1)%cap;
//         }
//     }
// }

// implement dequeue using link list 
// struct node{
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// struct queue{
//     int size;
//     node* front, *rear;
//     queue(){
//         size=0;
//         front=NULL;
//         rear=NULL;
//     }

//     void enqueue(){
//         node* temp=new node(x);
//         size++;
//         if(front==NULL){
//             front=temp;
//             rear=temp;
//             return;
//         }
//         rear->next=temp;
//         rear=temp;
//     }
//     void dequeue(){
//         if(front==NULL){
//             return;
//         }
//         size--;
//         node* temp=front;
//         front=front->next;
//         if(front==NULL){
//             rear=NULL;
//         }
//         delete(temp);
//     }
// };

// queue in cpp stl- queue can be implemented on any underlying container that provides thr following operations-
// empty(),size(),front(),back(),push_back(),pop_front();
// queue<int>q; operations->push(),pop(),front(),back(),empty(),size(); time complexity = O(1)

// implementing stack using queue- using aux array
// struct stack{
//     queue<int> q1,q2;
//     int top(){}
//     int size(){}
//     int pop(){}
//     void push(int x){
//         while(q1.empty()==false){
//             q2.push(q1.top());
//             q1.pop();
//         }
//         q1.push(x);
//         while(q2.empty()==false){
//             q1.push(q2.top());
//             q2.pop();
//         }

//     }
// }

// reversing a queue
// iterative:
// queue<int> reverse(queue<int> & q){
//     stack<int>s;
//     while(q.empty()==false){
//         s.push(q.front());
//         q.pop();
//     }
//     while(s.empty()==false){
//         q.push(s.top());
//         s.pop();
//     }
//     return q;
// }
// // recursive:
// queue<int> reverseQueue(queue<int> &q) {
//     if(q.empty()){
//         return q;
//     }
//     int x=q.front();
//     q.pop();
//     reverseQueue(q);
//     q.push(x);
//     return q;
    
// }

// generate number with given digit 
// void printfirstN(int n){
//     queue<int> q;
//     q.push("5");
//     q.push("6");
//     for(int i=0; i<n; i++){
//         string curr=q.top();
//         cout<<curr<<" ";
//         q.pop();
//         q.push(curr+"5");
//         q.push(curr+"6");
//     }
// }

// ----------------------------------------------------Deque----------------------------------------------------------
// dequestand for doubly ended queue
// we can insert or delete from front as well as from rear 
//implementation- 
// either using doubly linklist or circular array
//application - 
//  a deque can be uised as both stack and queue
//  maintaining history of actions
// a steal process scheduling algo
// implementing a priority queue with two types of priorities 
// max/min of all subarray of size k in anarray

// implementation using circular array
// struct Deque{
//     int *arr;
//     int front, size , cap;
//     Deque(int c){
//         arr=new int[cap];
//         cap=c;
//         size=0;
//         front=0;
//     }
//     bool isFull() {return (size==cap);}
//     bool isEmpty() {return (size==0);}

//     void insertRear(int x){
//         if(isFull) return;
//         int rear = (front+size)%cap;
//         arr[rear]=x
//         size++;
//     }
//     void deleteRear(){
//         if(isEmpty) return ;
//         size--;
//     }
//     int getRear(){
//         if(isEmpty) return -1;
//         else return (front+size-1)%cap;
//     }

//     void insertFront(int x){
//         if(isFull) return;
//         front=(front+cap-1)%cap;
//         arr[front]=x;
//         size++;
//     }
//     void deleteFront(int x){
//         if(isEmpty) return;
//         front=(front+1)%cap;
//         size--;
//     }
//     int getFront(){
//         if(isEmpty) return -1;
//         else return front;
//     }
// }


// deque in cpp stl-it allows us to random access , also allow to arbitary number of insertion in O(1) time
// deque<datatype>variableName;
// operations-push_front(),push_back(),front(),back(),pop_front(),pop_back(),insert(iterator,value),size()
// time complexity of all opeation in cpp = O(1);
// in cpp deque provide us random access which is not possible if we implement deque using doubly link list but
//  possible with circular array but there is a problem with it it may costly when element are more than capacity 
// so there is trick to implement deque in cpp ...[ pointer[0] ]  [ pointer[1] ]  [ pointer[2] ].......
//                                                    //|\\           //|\\          //|\\
//                                                  [][][][][]      [][][][][]     [][][][][]
// eg:
// int main(){
//     deque<int> dq=[10,15,30,5,12];
//     int it= dq.begin(); //it=0;
//     int it++;           //it=1
//     dq.insert(it,20);   // insert operation insert value just before the iterator hence [10,20,15,30,5,12]
//     dq.pop_front();     //[20,15,30,5,12]
//     dq.pop_back();      //[20,15,30,5]
//     cout<<dq.size();    // 4
//     return;
// }

// data structure with min/max operation(can be implement using deque)
// struct myDs{
//     deque<int>dq;
//     void insertMin(int x){
//         dq.push_front(x);
//     }
//     void insertMax(int x){
//         dq.push_back(x);
//     }
//     int getMin(){
//         return dq.front();
//     }
//     int getMax(){
//         return dq.back();
//     }
//     int extractMin(){
//         return dq.pop_front();
//     }
//     int extractMax(){
//         return dq.pop_back();
//     }
// };

// printmax
// vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//     deque<int> dq;
//     vector<int> ans;
//     for (int i = 0; i < k; i++) {
//         while (!dq.empty() && arr[i] >= arr[dq.back()]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     for (int i = k; i < arr.size(); i++) {
//         ans.push_back(arr[dq.front()]);
//         while (!dq.empty() && dq.front() == i - k) {
//             dq.pop_front();
//         }
//         while (!dq.empty() && arr[i] >= arr[dq.back()]) {
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     ans.push_back(arr[dq.front()]);
//     return ans;
// }

//  int firstPetrol(int petrol[],int dist[],int n){
//     for(int i=0; i < n; i++){
//         int curr=0;
//         int end=start;
//         while(true){
//             curr+=petrol[end]-dist[end];
//             if(curr<0) break;
//             end=end+1%n;
//             if(start==end)
//             return start+1;
//         }
//     }
//     return -1;
//  }

// int circularTour(vector<int>& a1, vector<int>& a2) {
//     int curr = 0;
//     deque<int> dq;
//     int n=a1.size();

//     for(int i = 0; i < 2 * n; i++) {
//         int idx=i % n;
//         dq.push_back(idx);
//         curr+=a1[idx] - a2[idx];

//         while(curr < 0 && !dq.empty()) {
//             curr-=a1[dq.front()] - a2[dq.front()];
//             dq.pop_front();
//         }
//         if (dq.size() == n) {
//             return dq.front();
//         }
//     }

//     return -1;
// }

// int circularTour(vector<int>& a1, vector<int>& a2) { 
//     int start=0, curr=0, deficit=0;
//     for(int i=0; i < a1.size(); i++) {
//         curr+=a1[i] - a2[i];
//         if (curr < 0) {
//             start=i+1;
//             deficit+=curr;
//             curr = 0;
//         }
//     }

//     return(curr+deficit >= 0) ? start: -1;
// }

