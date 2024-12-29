#include<bits/stdc++.h>
using namespace std;

// int main(){
//     cout<<pow(8,9)<<endl;
//     return 0;
// }


// -------------------------------------------------tree-----------------------------------------------------------------
// term: node, root, leaf, child, parent, subtree, descendants, ancestors, degree(no. of child ), internal
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

void inorder(node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(node *root){
    if(root != NULL){
        cout << root->key << " ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(node *root){
    if(root != NULL){
        inorder(root->right); 
        inorder(root->left);
        cout << root->key << " ";
    }
}

int heightOfBt(node *root) {
    if (root == NULL) {
        return 0; 
    }
    int leftHeight = heightOfBt(root->left);  
    int rightHeight = heightOfBt(root->right); 
    return max(leftHeight, rightHeight) + 1; 
}

void printNodeAtdisK(node *root, int k) {
    if (root == NULL) {
        return;
    }
    if (k == 0) {
        cout << root->key << " ";
    } else {
        printNodeAtdisK(root->left, k - 1);
        printNodeAtdisK(root->right, k - 1);
    }
}

void levelOrder(node* root) {
    int h = heightOfBt(root);
    for (int i = 0; i < h; ++i) {         //TC:O(h*n)
        cout << "Level " << i+1 << ": ";
        printNodeAtdisK(root, i);
        cout << endl;
    }
}

void levelOrder01(node* root) {
    if (root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
}
//level order traversal line by line by adding null 
void levelOrder02(node* root) {  
    if (root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1) {
        node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if (curr->left != NULL) {
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }
}
//level order traversal method 2
void levelOrder03(node* root) {
    if (root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int count=q.size();
        for(int i=0;i<count;i++){
            node* curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
} 

int sizeOfBt(node *root){
    if(root == nullptr){
        return 0;            //TC-O(n) and AS-O(height of BT)
    }else{                                             
        return 1+sizeOfBt(root->left)+sizeOfBt(root->right);
    }

}

int maxInBt(node *root){
    if(root == nullptr){
        return -1;
    }else{
        return max(root->key,max(maxInBt(root->left),maxInBt(root->right)));
    }
}

//pirnt left view of Binary Tree
void printLeftView(node *root){
    if (root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int count=q.size();
        for(int i=0;i<count;i++){
            node* curr = q.front();
            q.pop();
            if(i==0){
                cout << curr->key << " ";
            }
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
        cout<<endl;
    }
}

// recursive solution:
int maxlevel=0;
void printLeft02(node *root, int level){
    if(root == nullptr){
        return;
    }
    if(maxlevel<level){
        cout << root->key << " ";
        maxlevel=level;
    }
    printLeft02(root->left,level+1);
    printLeft02(root->right,level+1);
}
void printLeftView02(node* root){
    printLeft02(root,1);
}


int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Level Order Traversal: "<<endl;
    printLeftView02(root);
    cout << endl;

    return 0;
}

