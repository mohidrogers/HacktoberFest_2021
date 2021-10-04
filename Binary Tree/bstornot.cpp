#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int bstornot(node* node, int min, int max);
int isBST(node* node)
{
	return(bstornot(node, INT_MIN, INT_MAX));
}
int bstornot(node* node, int min, int max)
{
	if (node==NULL)
		return 1;
	if (node->data < min || node->data > max)
		return 0;
	return
		bstornot(node->left, min, node->data-1) && 
		bstornot(node->right, node->data+1, max);
}
int main()
{
	node *root = new node(10);
	root->left = new node(2);
	root->right = new node(6);
	root->left->left = new node(1);
	root->left->right = new node(4);
	if(isBST(root))
		cout<<"Is BST";
	else
		cout<<"Not a BST";
	return 0;
}
