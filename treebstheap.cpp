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

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Level Order Traversal: ";
    levelOrder01(root);
    cout << endl;

    return 0;
}

