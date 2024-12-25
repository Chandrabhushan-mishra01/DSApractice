#include<bits/stdc++.h>
using namespace std;

// int main(){
//     cout<<1<<endl;
//     return 0;
// }


// -------------------------------------------------tree-----------------------------------------------------------------
// term: node, root, leaf, child, parent, subtree, descendants, ancestors, degree(no. of child ), internal
// application: To represent hierarchical data (organization structure, folder structure, xml/html content(json object), in oop)
//              binary search tree, binary heap, b ans b+ tree in DBMS, spanning and shortest path tree in computer network,
//              parse tree, expression tree in compiler, trie, suffix tree, binary index tree, segment tree
// Binary tree: every node has at most two children (1 or 2)                                           eg.  *l {30} *r
//              every node has tree fields ---> [  [*left pointer] [key or data] [*right pointer]  ] :      /        \
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
//              recursuve -   traversse left subtree     front 6 way three are famous :
//                         \  traverse right subtree     inorder preorder and postorder(in these three permutation we visit left subtree before right subtree).
// inorder   - (left root right)
// preorder  - (root left right)    //# left - left subtree //# right - right subtree
// postorder - (left right root)
// implementation : 