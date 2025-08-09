#include<iostream>
#include <vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
static int indx=-1;
Node * build_tree(vector <int> & preorder){
    indx++;
    if(preorder[indx]==-1) return NULL;
    Node* root = new Node(preorder[indx]);
    root->left=build_tree(preorder);
    root->right=build_tree(preorder);
    return root;
}
int height_of_tree(Node* root){
    if(root==NULL) return 0;
    int leftht=height_of_tree(root->left);
    int rightht=height_of_tree(root->right);
    int height=max(leftht,rightht)+1;
    
    return height;

}
int count_of_nodes(Node* root){
    if(root==NULL) return 0;
    int left_count=count_of_nodes(root->left);
    int right_count=count_of_nodes(root->right);

    int count= left_count+right_count+1;
    return count;
}
int sum_of_nodes(Node* root){
    if(root == NULL) return 0;
    int left_sum=sum_of_nodes(root->left);
    int right_sum=sum_of_nodes(root->right);

    int sum=left_sum+right_sum+root->data;
    return sum;
}
int main()
{
    vector <int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,6,-1,-1};
    Node* root=build_tree(preorder);
    cout<<height_of_tree(root)<<endl;
    cout<<count_of_nodes(root)<<endl; 
    cout<<sum_of_nodes(root)<<endl; 

    
    return 0;
}