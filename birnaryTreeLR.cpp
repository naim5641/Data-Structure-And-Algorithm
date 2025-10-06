#include<bits/stdc++.h>
using namespace std;


class Node{

public:
    int data;
    Node *left, *right;

    Node(int value){
        left = right = NULL;
        data = value;
    }
};

Node * BinaryTree()
{

    int x;
    cin>>x;
    if( x == -1){
        return NULL;
    }

    Node *temp = new Node(x);
    // Left side create
    cout << "Enter the left child of "<<x<<" :";
    temp-> left = BinaryTree();

    // right side create
    cout << "Enter the right child of "<<x<<" :";
    temp-> right = BinaryTree();
    return temp;
}



int main()
{
    cout << "Enter the root node : ";
    Node * root;
    root = BinaryTree();


    return 0;
}
