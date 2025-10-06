#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {

        data = value;
        left = right = NULL;
    }
};

int main()
{
    int x;
    cout<< "Enter the root element : ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);

    //Billd the binary tree

    while(!q.empty()){
        Node *temp = q.front();
        cout<< "Enter the left Value of "<<temp->data<<" : ";
        q.pop();
        cin>>first; // left node value

        //left node
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        // right node
        cout<<"Enter the right value of " << temp->data << " : ";
        cin>> second;
        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }



}
