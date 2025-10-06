#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left,*right;
    node (int value){
        data = value;
        left = right = NULL;
    }
};

node *BinaryTree(){

    int x;
    cin>>x;
    if(x==-1)
        return NULL;
    node * temp = new node(x);
    // left node create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();
    // right node create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();

    return temp;

}

int main()
{
    cout << "Enter the root node : ";
    node * root;
    root = BinaryTree();

    return 0;
}
