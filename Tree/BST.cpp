#include<iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(){
        data=0;
        left=right=NULL;
    }
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
    Node* insert(Node* root, int val){
        if(root==NULL){
            Node* newNode=new Node(val);
            return newNode;
        }
        if(val<root->data){ //left node
            root->left=insert(root->left,val);
        }
        else{
            root->right=insert(root->right,val);
        }
        return root;

    }
    Node* buildsearchTree(vector<int> & nodes){
        Node* root =NULL;
        for(int val : nodes){
            root=insert(root,val);
        }
        return root;
    }
    void inorderTraversal(Node* root){
        if(root==NULL) return;
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);


    }


int main()
{
    vector <int> nodes={3,2,1,5,6,4};
    Node* root= buildsearchTree(nodes);

    inorderTraversal(root);
    return 0;
}