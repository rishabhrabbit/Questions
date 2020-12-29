#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *left, *right;
	
	Node(int val) 
    { 
        data = val; 
        left = NULL; 
        right = NULL; 
    } 

};

void takeInput(Node* &node) {
    bool l;
    int data;
    cin >> data;
    node = new Node(data);
    cin>>l;
    if(l)takeInput(node->left);
    cin>>l;
    if(l)takeInput(node->right);
}

void print(Node* root){if(!root)return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

Node * InputBT(){
    Node *root;
    takeInput(root);
    return root;
}

int main() {
	Node *root = InputBT();
	print(root);
	return 0;
}
