#include<bits/stdc++.h>
using namespace std;

// int main(){
//     cout<<pow(8,9)<<endl;
//     return 0;
// }


// -------------------------------------------------tree-----------------------------------------------------------------
// term: node, root, leaf, child, parent, subtree, descendants, ancestors, degree(no. of connected nodes), internal
// application: To represent hierarchical data (organization structure, folder structure, xml/html content(json object), in oop)
//              binary search tree, binary heap, b ans b+ tree in DBMS, spanning and shortest path tree in computer network,
//              parse tree, expression tree in compiler, trie, suffix tree, binary index tree, segment tree
// Binary tree: every node has at most two children (1 or 2)                                           eg.  [*l] {30} [*r]
//              every node has tree fields ---> [  [*left pointer] [key or data] [*right pointer]  ] :      /            \
// c++ implementation to represent the binary tree 
// struct node{
//     int key;
//     int *left;
//     int *right;
//     node(int k){
//         key=k;
//         left=NULL;
//         right=NULL;
//     }
// }
// int main(){
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->left->left = new node(40);
// }

// tree traversal: 1)breath first(or level order).  2) depth first - a)inorder b)preorder C)postorder
// df traversal -          /  traverse root              there are factorial 3 way to do these task
//              recursive -   traversse left subtree     front 6 way three are famous :
//                         \  traverse right subtree     inorder preorder and postorder(in these three permutation we visit left subtree before right subtree).
// inorder   - (left root right)
// preorder  - (root left right)    //# left - left subtree //# right - right subtree
// postorder - (left right root)
// implementation : 

struct node {
    int key;
    node *left;
    node *right;
    node(int k) {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// void inorder(node *root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->key << " ";
//         inorder(root->right);
//     }
// }

// void preorder(node *root){
//     if(root != NULL){
//         cout << root->key << " ";
//         inorder(root->left);
//         inorder(root->right);
//     }
// }

// void postorder(node *root){
//     if(root != NULL){
//         inorder(root->right); 
//         inorder(root->left);
//         cout << root->key << " ";
//     }
// }

// int heightOfBt(node *root) {
//     if (root == NULL) {
//         return 0; 
//     } 
//     return max(heightOfBt(root->left), heightOfBt(root->right)) + 1; 
// }

// void printNodeAtdisK(node *root, int k) {
//     if (root == NULL) {
//         return;
//     }
//     if (k == 0) {
//         cout << root->key << " ";
//     } else {
//         printNodeAtdisK(root->left, k - 1);
//         printNodeAtdisK(root->right, k - 1);
//     }
// }

// void levelOrder(node* root) {
//     int h = heightOfBt(root);
//     for (int i = 0; i < h; ++i) {         //TC:O(h*n)
//         cout << "Level " << i+1 << ": ";
//         printNodeAtdisK(root, i);
//         cout << endl;
//     }
// }

// void levelOrder01(node* root) {
//     if (root == NULL) {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         node* curr = q.front();
//         q.pop();
//         cout << curr->key << " ";
//         if (curr->left != NULL) {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL) {
//             q.push(curr->right);
//         }
//     }
// }
// //level order traversal line by line by adding null 
// void levelOrder02(node* root) {  
//     if (root == NULL) {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while (q.size()>1) {
//         node* curr = q.front();
//         q.pop();
//         if(curr==NULL){
//             cout<<endl;
//             q.push(NULL);
//             continue;
//         }
//         cout << curr->key << " ";
//         if (curr->left != NULL) {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL) {
//             q.push(curr->right);
//         }
//     }
// }
// //level order traversal method 2
// void levelOrder03(node* root) {
//     if (root == NULL) {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int count=q.size();
//         for(int i=0;i<count;i++){
//             node* curr = q.front();
//             q.pop();
//             cout << curr->key << " ";
//             if (curr->left != NULL) {
//                 q.push(curr->left);
//             }
//             if (curr->right != NULL) {
//                 q.push(curr->right);
//             }
//         }
//         cout<<endl;
//     }
// } 

// int sizeOfBt(node *root){
//     if(root == nullptr){
//         return 0;            //TC-O(n) and AS-O(height of BT)
//     }else{                                             
//         return 1+sizeOfBt(root->left)+sizeOfBt(root->right);
//     }

// }

// int maxInBt(node *root){
//     if(root == nullptr){
//         return -1;
//     }else{
//         return max(root->key,max(maxInBt(root->left),maxInBt(root->right)));
//     }
// }

// //pirnt left view of Binary Tree
// void printLeftView(node *root){
//     if (root == NULL) {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int count=q.size();
//         for(int i=0;i<count;i++){
//             node* curr = q.front();
//             q.pop();
//             if(i==0){
//                 cout << curr->key << " ";
//             }
//             if (curr->left != NULL) {
//                 q.push(curr->left);
//             }
//             if (curr->right != NULL) {
//                 q.push(curr->right);
//             }
//         }
//         cout<<endl;
//     }
// }

// // recursive solution:
// int maxlevel=0;
// void printLeft02(node *root, int level){
//     if(root == nullptr){
//         return;
//     }
//     if(maxlevel<level){
//         cout << root->key << " ";
//         maxlevel=level;
//     }
//     printLeft02(root->left,level+1);
//     printLeft02(root->right,level+1);
// }
// void printLeftView02(node* root){
//     printLeft02(root,1);
// }

// //children sum property(sum(leftchild,rightchild) == its_root)
// bool childSum(node *root){
//     if (root == nullptr) return true;
//     if (root->left == nullptr && root->right == nullptr) return true;

//     int sum = 0;
//     if (root->left != nullptr){
//         sum += root->left->key;
//     }
//     if (root->right != nullptr){
//         sum += root->right->key;
//     }
//     return (root->key == sum && childSum(root->left) && childSum(root->right) );
// }

// bool isBalanced(node *root){
//     if(root == nullptr) return true;
//     int lh = heightOfBt(root->left);    //TC-O(n^2)
//     int rh = heightOfBt(root->right);
//     return (abs(lh-rh) <= 1  && isBalanced(root->left)) && isBalanced(root->right);
// }



// int isBalancedUtil(node *root) {
//     if (root == NULL)
//         return 0;

//     int lh = isBalancedUtil(root->left);
//     if (lh == -1) return -1;
//     int rh = isBalancedUtil(root->right);
//     if (rh == -1) return -1;

//     if (abs(lh - rh) > 1)
//         return -1;

//     return max(lh, rh) + 1;
// }

// bool isBalanced01(node *root) {
//     return isBalancedUtil(root) != -1;
// }


// int maxWidth(node *root) {
//     if (root == nullptr) return 0;
//     queue<node *> q;
//     q.push(root);
//     int ans = 0;
//     while (!q.empty()) {
//         int count = q.size();  
//         ans = max(ans, count);
//         for (int i = 0; i < count; i++) {
//             node *curr = q.front();
//             q.pop();
//             if (curr->left != nullptr)
//                 q.push(curr->left);

//             if (curr->right != nullptr)
//                 q.push(curr->right);
//         }
//     }
//     return ans;
// }

// //convert a Binary tree to Doubly link list -- return head of DLL
// // node *prev = NULL;
// // node *btoDLL(node *root){
// //     if (root == nullptr){ return root; }
// //     node *head = btoDLL(root->left);
// //     if (prev == nullptr){ head == root;}
// //     else{
// //         root->left = prev;
// //         prev->right = root;
// //     }
// //     prev = root;
// //     btoDLL(root->right);
// //     return head;
// // }

// int preIndex = 0;
// node* cTree(vector<int>& inorder, vector<int>& preorder, int is, int ie) {
//     if (is > ie) return NULL;
//     node* root = new node(preorder[preIndex++]);
//     int inIndex = -1;
//     for (int i = is; i <= ie; i++) {
//         if (inorder[i] == root->key) {
//             inIndex = i;
//             break;
//         }
//     }
//     root->left = cTree(inorder, preorder, is, inIndex - 1);
//     root->right = cTree(inorder, preorder, inIndex + 1, ie);

//     return root;
// }


// //  Function to perform spiral order traversal
// void printspiral(node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);
//     stack<int> s;
//     bool reverse = false;
//     while (!q.empty()) {
//         int count = q.size();
//         for (int i = 0; i < count; i++) {
//             node* curr = q.front();
//             q.pop();
//             if (reverse) {
//                 s.push(curr->key);
//             } else {
//                 cout << curr->key << " ";
//             }
//             if (curr->left != nullptr) {
//                 q.push(curr->left);
//             }
//             if (curr->right != nullptr) {
//                 q.push(curr->right);
//             }
//         }
//         if (reverse) {
//             while (!s.empty()) {
//                 cout << s.top() << " ";
//                 s.pop();
//             }
//         }
//         reverse = !reverse; 
//         cout << endl;
//     }
// }

// //method02:

// void printspiral02(node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     stack<node*> s1;
//     stack<node*> s2;
//     s1.push(root);
//     while (!s1.empty() || !s2.empty()) {
//         while (!s1.empty()) {
//             node* curr = s1.top();
//             s1.pop();
//             cout << curr->key << " ";
//             if (curr->left != nullptr) {
//                 s2.push(curr->left);
//             }
//             if (curr->right != nullptr) {
//                 s2.push(curr->right);
//             }
//         }
//         cout<<endl;
//         while (!s2.empty()) {
//             node* curr = s2.top();
//             s2.pop();
//             cout << curr->key << " ";

//             if (curr->right != nullptr) {
//                 s1.push(curr->right);
//             }
//             if (curr->left != nullptr) {
//                 s1.push(curr->left);
//             }
            
//         }
//         cout<<endl;
//     }
// }

// // Diameter of Binary Tree
// int height(node *root){
//     if(root == nullptr){
//         return 0;
//     }else{
//         return 1+max(height(root->left),height(root->right));
//     }
// }
// int diameter(node *root){
//     if(root == nullptr){
//         return 0;
//     }
//     int d1 = 1 + height(root->left) + height(root->right);

//     int d2 = diameter(root->left);
//     int d3 = diameter(root->right);

//     return max(d1,max(d2,d3));
// }

// // Efficient solution
// int res = 0;

// int heighte(node* root) {
//     if (root == nullptr) return 0;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     res = max(res, lh + rh);
//     return 1 + max(lh, rh);
// }

// int diametere(node* root) {
//     res = 0;
//     height(root);
//     return res;
// }



// //LCA Naive solution
// bool findpath(node* root, vector<node*>& p, int n) {
//     if (root == nullptr) return false;
//     p.push_back(root);
//     if (root->key == n) return true;
//     if (findpath(root->left, p, n) || findpath(root->right, p, n)) return true;
//     p.pop_back();
//     return false;
// }

// node* LCA(node* root, int n1, int n2) {
//     vector<node*> path1, path2;
//     if (findpath(root, path1, n1) == false || findpath(root, path2, n2) == false) return nullptr;
//     for (int i = 0; i < path1.size() - 1 && i < path2.size() - 1; i++) {
//         if (path1[i + 1] != path2[i + 1]) {
//             return path1[i];
//         }
//     }
//     return nullptr;
// }

// // for efficient solution 
// // we do normal traversal, and we have following cases for every node
// // cases---> if it is same as n1 or n2, if one of its subtree contains n1 and other contains n2, if one of its subtree contains both n1 and n2

// node* LCAeffi(node* root, int n1, int n2){
//     if(root == nullptr) return nullptr;
//     if(root -> key == n1 || root -> key == n2) return root;
//     node* lca1 = LCAeffi(root->left, n1, n2);
//     node* lca2 = LCAeffi(root->right, n1, n2);
//     if(lca1 != nullptr && lca2 != nullptr) return root;
//     if(lca1 != nullptr) return lca1;
//     else return  lca2;
// }
// /*
// Question:Given a binary tree and a node data called target. 
//         Find the minimum time required to burn the complete binary tree if the target is set on fire. 
//         It is known that in 1 second all nodes connected to a given node get burned.
//         That is its left child, right child, and parent.
// */
// //if the targeted node is leaf
//  int a=0;
//  int burnTime(node* root, int leaf, int &dist){
//     if(root==nullptr) return 0;
//     if(root->key==leaf){
//         dist=0;
//         return 1;
//     }
//     int ldist=-1, rdist=-1;
//     int lh = burnTime(root->left, leaf, ldist);
//     int rh = burnTime(root->right, leaf, rdist);
//     if(ldist!=-1){
//         dist=ldist+1;
//         a=max(a,dist+rh);
//     }
//     if(rdist!=-1){
//         dist=rdist+1;
//         res=max(res,dist+lh);
//     }
//     return max(lh,rh)+1;
//  }

// //if any node is targeted node 
// class Solution {
//   public:

//     Node* createParentMapping(Node* root, int target, map<Node*, Node*>& nodeToParent) {
//         Node* targetNode = NULL;
//         queue<Node*> q;
//         q.push(root);
//         nodeToParent[root] = NULL;
    
//         while (!q.empty()) {
//             Node* front = q.front();
//             q.pop();
    
//             if (front->data == target) {
//                 targetNode = front;
//             }
    
//             if (front->left) {
//                 nodeToParent[front->left] = front;
//                 q.push(front->left);
//             }
//             if (front->right) {
//                 nodeToParent[front->right] = front;
//                 q.push(front->right);
//             }
//         }
    
//         return targetNode;
//     }
    
//     int burnTree(Node* targetNode, map<Node*, Node*>& nodeToParent) {
//         map<Node*, bool> visited;
//         queue<Node*> q;
//         q.push(targetNode);
//         visited[targetNode] = true;
    
//         int time = 0;
    
//         while (!q.empty()) {
//             int size = q.size();
//             bool burnt = false;
    
//             for (int i = 0; i < size; i++) {
//                 Node* current = q.front();
//                 q.pop();
    
//                 if (current->left && !visited[current->left]) {
//                     q.push(current->left);
//                     visited[current->left] = true;
//                     burnt = true;
//                 }
    
//                 if (current->right && !visited[current->right]) {
//                     q.push(current->right);
//                     visited[current->right] = true;
//                     burnt = true;
//                 }
    
//                 if (nodeToParent[current] && !visited[nodeToParent[current]]) {
//                     q.push(nodeToParent[current]);
//                     visited[nodeToParent[current]] = true;
//                     burnt = true;
//                 }
//             }
    
//             if (burnt) {
//                 time++;
//             }
//         }
    
//         return time;
//     }
    
//     int minTime(Node* root, int target) {
//         map<Node*, Node*> nodeToParent;
//         Node* targetNode = createParentMapping(root, target, nodeToParent);
//         return burnTree(targetNode, nodeToParent);
//     }

// };

// // count nodes in a complete binary tree(which is complete from left to right )
// int countNodes(node* root) {
//     // if(root == NULL) 
//     //     return 0;
//     // else 
//     //     return 1+countNodes(root->left)+countNodes(root->right);
    
//     // Design an algorithm that runs better than O(n).
//     int lh=0, rh=0;
//     node* curr = root;
//     while (curr != NULL){
//         lh++;
//         curr=curr->left;
//     }
//     curr = root;
//     while (curr != NULL){
//         rh++;
//         curr=curr->right;
//     }
//     if (lh == rh){
//         return pow(2,lh)-1;
//     }
//     else 
//         return 1+countNodes(root->left)+countNodes(root->right);
// }

// void iterativeInorder(node* root){
//     stack <node*> s;
//     node* curr = root;
//     while (curr!=nullptr || s.empty()==false){
//         while (curr != nullptr){
//             s.push(curr);
//             curr = curr->left;
//         }
//         curr = s.top();
//         s.pop();
//         cout << curr->key << " ";
//         curr = curr->right;
//     }
    
// }

// class Solution{
//     public:
//     vector<int> preOrder(node* root)
//     {

//         // stack<node*> s;              
//         // vector<int> ans;  
//         // if (root == NULL) return ans;  
//         // s.push(root); 
    
//         // while (!s.empty()) {
//         //     node* curr = s.top();
//         //     s.pop();
//         //     ans.push_back(curr->key); 
//         //     if (curr->right != NULL) s.push(curr->right);
//         //     if (curr->left != NULL) s.push(curr->left);
//         // }
//         // return ans;
        
        
//         // *** to optimise space only keep track of right ***
//         stack <node*> s;
//         vector <int> ans;  
//         node* curr = root;
//         while(curr!=NULL || s.empty()==false){
//             while(curr!=NULL){
//                 ans.push_back(curr->key);
//                 if(curr->right!=NULL) s.push(curr->right);
//                 curr=curr->left;
//             }
//             if(s.empty()==false){
//                 curr=s.top();
//                 s.pop();
//             }
//         }
//         return ans;
//     }
// };

// vector<int> postOrder(node*root) {
//     // code here
//     stack<node*> s;
//     vector<int> ans;
//     node* curr = root;
//     node* last = NULL;

//     while (curr != NULL || !s.empty()) {
//         while (curr != NULL) {
//             s.push(curr);
//             curr = curr->left;
//         }
//         node* peek = s.top();

//         if (peek->right != NULL && last != peek->right) {
//             curr = peek->right;
//         } else {
//             ans.push_back(peek->data);
//             last = peek;
//             s.pop();
//         }
//     }
//     return ans;
// }






// --------------------------------------------------Binary Search Tree-------------------------------------------
/*


                    |  Array(unsorted)  |Array(sorted)  | Link List    |BST(Balanced)  |Hash Table    |
search              |   O(n)            |  O(n)         |     O(n)     |   O(log n)    |    O(1)      |
insert              |   O(1)            |  O(n)         |     O(1)     |   O(log n)    |   O(1)       |
delete              |   O(n)            |  O(n)         |     O(n)     |   O(log n)    |   O(1)       |
find closest        |   O(n)            |  O(log n)     |     O(n)     |   O(log n)    |   O(n)       |
sorted traversal    |   O(n log n)      |  O(n)         |    O(n log n)|   O(n)        |   O(n log n) |


---*****NOTES*****---
1.For every node, keys in left side are smaller and keys in right side are greater.
2.All keys are typically considered as distinct. 
3.Like linked list it is a linked data structure.
                          50
                        /    \
                      30      70
                     /  \    /  \
                    10  40  60  80
4.Implement in cpp as map, set, multimap and multiset (and in java as TreeSet and TreeMap).


*/

// bool SearchBST(node* root, int x) {
//     if (root == nullptr)
//         return false;

//     if (root->key == x)
//         return true;

//     else if (root->key > x)
//         return SearchBST(root->left, x);
//     else
//         return SearchBST(root->right, x);
// }

// // iterative Search in BST c++
// bool iSearchBST(node* root, int x){
//     while(root != NULL){
//         if(root->key == x)
//             return true;
//         else if(root->key < x)
//             root = root->right;
//         else
//             root = root->left;
//     }
//     return false;
// }


// node* insertBST_R(node* root, int x) {
//     if (root == nullptr) {
//         return new node(x);
//     }
//     if (x < root->key) {
//         root->left = insertBST_R(root->left, x);
//     } else if (x > root->key) {
//         root->right = insertBST_R(root->right, x); 
//     }
//     return root;
// }


// node* insertBST(node* root, int x) {
//     node* temp = new node(x);
//     node* parent = nullptr;
//     node* curr = root;

//     while (curr != nullptr) {
//         parent = curr;
//         if (curr->key < x)
//             curr = curr->right;
//         else if (curr->key > x)
//             curr = curr->left;
//         else
//             return root; 
//     }
//     if (parent == nullptr)
//         return temp; 
//     if (parent->key > x)
//         parent->left = temp;
//     else 
//         parent->right = temp;
//     return root;
// }

// void inorder(node* root) {
//     if (root == nullptr) return;
//     inorder(root->left);
//     cout << root->key << " ";
//     inorder(root->right);
// }

// // Delete in BST
// node* getSuccessor(node* curr){
//     curr = curr->right;
//     while(curr != nullptr && curr->left != nullptr){
//         curr = curr->left;
//     }
//     return curr;
// }

// node* deletenode(node* root, int x){
//     if(root == nullptr) return root;
//     if(root->key > x) root->left = deletenode(root->left, x);
//     else if(root->key < x) root->right = deletenode(root->right, x);
//     else{
//         if(root->left == nullptr){
//             node* temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if(root->right == nullptr){
//             node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         else{
//             node* succ = getSuccessor(root);        // how to get successor(closest greater value or closest smaller value)
//             root->key = succ->key;                  //  left most node of right child (closest greater value)
//             root->right = deletenode(root->right, succ->key);
//         }
//         return root;
//     }
// }

// int floor_i(Node* root, int x) {
//         int temp = -1;  
//         while (root) {
//             if (root->data == x) 
//                 return x;
//             else if (root->data > x) 
//                 root = root->left;
//             else {  
//                 temp = root->data;  
//                 root = root->right;
//             }
//         }
//         return temp;
// }

// int floor_r(Node* root, int x) {  
//         if (root == nullptr) return -1;
//         if (root->data == x) return x;
    
//         if (root->data > x) 
//             return floor(root->left, x);
    
//         int temp = floor(root->right, x);
//         if (temp <= x && temp != -1)
//             return temp;
//         else
//             return root->data;
// }

// int findCeil(Node* root, int x) {
//     int temp = -1;  
//     while (root) {
//         if (root->data == x) 
//             return x;
//         else if (root->data < x)
//             root = root->right;
//         else {  
//             temp = root->data; 
//             root = root->left;
//         }
//     }
//     return temp;  
// }

// //Self Balancing BST
// /*
// Notes: 
// Background - same set of keys can make different height of BST.
// Idea - keep the height as O(log n) 
// if the height is log n then all operation search delete insert floor ceil all operation become log n.
// * if we keys in advance, we can make a perfectly balanced BST.
//  how to keep it balanced when random insert/deletions heppening?
//  the idea is to do some re-balancing(restructuring) when doing insertion/deletions. 
//  --ROTATION--right rotation or left rotation
//   |_ AVL Tree       }   are two example of 
//   |_ Red Black Tree }   Self balancing Tree
// */
// /*
//                                        ------ AVL TREE ------
// 1. It is a BST (for every node, left subtree is smaller and right greater).
// 2. it is balanced (for every node, difference between left and right height does not exceed one).
//     balance factor = |lh-rh| <= 1
// 3. all operation remain same except insertion and deletion 
//    in insertion -
//     a) perform normal BST insert
//     b) Traverse all ancestors of the nearly inserted node from the node to root
//     c) If find an unbalanced node check for any of the below cases 
//        (1) left left   } single rotation
//        (2) right right }
//        (3) right left  }
//        (4) left right  } double rotation
// note: Height of AVL Tree ( h < c log base 2(n+2) + b)  where c = 1.44 and b = -1.32 which is nearly equal to log n 
// */
//  /*
//                                       --------Red Black Tree-----
// 1.Every node is either Red or Black.
// 2.Root is always black.
// 3.No two consecutive Reds.
// 4.Number of black nodes from every node to all of its descandent leaves should be same.
// notes : Number of nodes on the path from a node to its farthest descendant leaf should 
// not be more than twice than the number of nodes on the path to its closest descendant leaf.
//  */

// /*
// Application of BST -->
// 1)To maintain sorted stream of data (or sorted set of data)
// 2)To implement doubly ended priority queue
// 3)To solve problem like 
//     a)count smaller/greater in a stream 
//     b)floor/ceiling/greater/smaller in a stream
// */

// // Naive solution for ceiling on the left side in an array
// void printCeiling(int arr[], int n){
//     cout<<"-1"<<" ";
//     for(int i=1;i<n;i++){
//         int diff=INT_MAX;
//         for(int j=0;j<i;j++){
//             if(arr[j]>=arr[i])
//                 diff=min(diff,arr[j]-arr[i]);
//         }
//         if(diff==INT_MAX)
//             cout<<"-1"<<" ";
//         else
//             cout<<(arr[i]+diff)<<" ";
//     }
// }

// // Efficient solution
// /*
// 1.create a self balancing BST (using set)
// 2.insert  arr[0] into s
// 3.for(int i=0;i<arr.size();i++){
//     if(s contain a ceiling of arr[i]) pritn(ceiling)
//     else print -1
//     insert arr[i] into s
// }
// */
// void printCeilingE(int arr[], int n){
//     cout<<"-1"<<" ";
//     set<int> s;
//     s.insert(arr[0]);
//     for(int i=1;i<n;i++){
//         if(s.lower_bound(arr[i])!=s.end())      //lower_bound(val) returns an iterator to the first element in the set that is not less than (>=) arr[i].
//             cout<<*(s.lower_bound(arr[i]))<<" ";//used *() when printing is because s.lower_bound(arr[i]) returns an iterator, not a direct value.
//         else
//             cout<<"-1"<<" ";
//         s.insert(arr[i]);
//     }
// }


// struct Node  
// { 
//   int key; 
//   struct Node *left; 
//   struct Node *right;
//   int lCount;
//   Node(int k){
//       key=k;
//       left=right=NULL;
//       lCount=0;
//   }
// };

// Node* insert(Node* root, int x)
// {
//     if (root == NULL)
//         return new Node(x);

//     if (x < root->key) {
//         root->left = insert(root->left, x);
//         root->lCount++;
//     }
 
//     else if (x > root->key)
//         root->right = insert(root->right, x);
//     return root;
// }

// Node* kthSmallest(Node* root, int k)
// {
//     if (root == NULL)
//         return NULL;
 
//     int count = root->lCount + 1;
//     if (count == k)
//         return root;
 
//     if (count > k)
//         return kthSmallest(root->left, k);
 
//     return kthSmallest(root->right, k - count);
// }

// int kthSmallest(Node *root, int k, int &count) {
//     if (root == nullptr) return -1;
//         return kthSmallest(root->left, k);
//         if (left != -1) return left;
//         count++;
//         if (count == k) return root->data;
//         return kthSmallest(root->right, k);    
// }

// // Check for BST 

// bool isBSTusingRange(Node* root,int &min, int &max) {
//     if(root==nullptr) return true;
//     return (root->key > min && 
//             root->key < max &&
//             isBSTusingRange(root->left,min,root->key);   // min=INT16_MIN  , // max=INT16_MAX
//             isBSTusingRange(root->right,root->key,max);
//     )
// }

// int prev=INT_MIN;
// bool isBST(Node* root) {
//     if(root==nullptr) return true;
//     if(isBST(root->left)==false) return false;
//     if(root->data<=prev) return false;
//     prev=root->data;
//     return isBST(root->right);
// }

// // Fixing Two swapped nodes of a BST
// class Solution {
//   public:
//     Node *prev = nullptr, *first = nullptr, *second = nullptr;
//     void inorderFix(Node* root) {
//         if (root == nullptr) return;
//         inorderFix(root->left);
//         if (prev != nullptr && root->data < prev->data) {
//             if (first == nullptr) 
//                 first = prev;
//             second = root;
//         }
//         prev = root;
//         inorderFix(root->right);
//     }

//     struct Node *correctBST(struct Node *root) {
        
//         inorderFix(root);
//         if (first != nullptr && second != nullptr)
//             swap(first->data, second->data);
//         return root;
//     }
// };
// // Pair Sum in BST
// class Solution {
//   public:
//   bool isPairSum(Node* root, int target, unordered_set<int> &s){
//       if(root == nullptr) return  false;
//       if(isPairSum(root->left,target,s)==true) return true;;
//       if(s.find(target-root->data)!=s.end()) return true;
//       else s.insert(root->data);
//       return isPairSum(root->right,target,s);
//   }
  
//     bool findTarget(Node *root, int target) {
//         // your code here.
//         unordered_set<int> s;
//         return isPairSum(root,target,s);
//     }
    
// };
// // verticalOrder traversal 
// // notes:map are internally implemented as self balancing BST
// vector<int> verticalOrder(Node *root){
//         vector<int>ans;
//         //Your code here
//         map<int,vector<int>>m;
//         queue<pair<Node*,int>>q;
//         q.push({root,0});
//         while(q.empty()==false){
//             auto p = q.front();
//             Node* curr = p.first;
//             int hd = p.second;
//             m[hd].push_back(curr->data);
//             q.pop();
//             if(curr->left!=nullptr){
//                 q.push({curr->left,hd-1});
//             }
//             if(curr->right!=nullptr){
//                 q.push({curr->right,hd+1});
//             }
//         }
//         for (auto& it : m) { 
//             ans.insert(ans.end(), it.second.begin(), it.second.end());
//         }

//         return ans;
// }

// int main() {
//     node* root = nullptr;

//     root = insertBST(root, 50);
//     root = insertBST(root, 30);
//     root = insertBST(root, 70);
//     root = insertBST(root, 20);
//     root = insertBST(root, 40);
//     root = insertBST(root, 60);
//     root = insertBST(root, 80);

//     cout << "Inorder traversal before deletion: ";
//     inorder(root);
//     cout << endl;

//     root = deletenode(root, 50); 

//     cout << "Inorder traversal after deleting 50: ";
//     inorder(root);
//     cout << endl;

//     return 0;
// }

// -----------------------------------------------Binary Heap--------------------------------------------------
/*
Notes: Binary heap is a complete binary tree(stored as an array).
1.It is used in heap sort.
2.used to implement Priority Queue.
3.Two Types: 
            MinHeap-highest priority item is assigned lowest value.(every node has value smaller than its descendants)
            MaxHeap-highest priority item is assigned highest value.

*/

//Heap implementation

class MinHeap {
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c) { 
        arr = new int[c];  
        size = 0;
        capacity = c;
    }

    int left(int i) { 
        return (2 * i + 1); 
    }
    int right(int i) { 
        return (2 * i + 2); 
    }
    int parent(int i) { 
        return (i - 1) / 2; 
    }

    void insert(int x) {
        if (size == capacity) return;
        size++;
        arr[size - 1] = x;
        int i = size - 1;
        while (i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i) {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        
        if (lt < size && arr[lt] < arr[i]) {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest]) {
            smallest = rt;
        }
        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extractMin() {
        if (size == 0) return -1; 
        if (size == 1) { 
            size--;
            return arr[0]; 
        }
        swap(arr[0],arr[size-1]);
        size--;  
        minHeapify(0);  

        return arr[size];  
    }

    void decreaseKey(int i, int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void deleteKey(int i){
        if (i >= size) return;  
        arr[i] = arr[size - 1];  
        size--;  

        if (i != 0 && arr[i] < arr[parent(i)]) {
            while (i != 0 && arr[parent(i)] > arr[i]) {
                swap(arr[i], arr[parent(i)]);
                i = parent(i);
            }
        } else {
            minHeapify(i);
        }
        
    }
    void buildHeap() {
        for (int i = (size - 2) / 2; i >= 0; i--) {  //bottom most right most internal node -using parent formula 
            minHeapify(i);                           //(size - 2) / 2 last element parent 
        }
    }

    void printHeap() { 
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h(10);
    
    h.insert(10);
    h.insert(35);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    
    cout << "Heap before extraction: ";
    h.printHeap();

    cout << "Extracted Min: " << h.extractMin() << endl;

    cout << "Heap after extraction: ";
    h.printHeap();

    return 0;
}

//heap Sort
void heapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0);   
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


// Priority queue in cpp 
/*
priority_queue<int> pq;                          -------->Default priority_queue is always maxheap
priority_queue<int,vector<int>,greater<int>> pq; -------->this is how create minimum at the top Minheap
arr[i] * -1 and then create maxheap during return again multiply with -1 -------->this will work as minheap
arr[]={10,20,30}
priority_queue<int> pq(arr,arr+3);  
user define --
struct person{
    int age ;
    float ht
    Person(int a, int ht){
        age =a
        ht=h
    }
}
struct mycomp{
    bool operator()(person const &p1 , person const &p2){
    p1.ht<p2.ht
}
}
int main(){
    priority_queue<person,vector<person>, mycomp>pq;
}
*/
