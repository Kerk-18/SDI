// Lab5a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
 
	std::cout << "Hello World!\n";
}

class IntBinaryTree {
public:
	struct TreeNode
	{
		int value;
		TreeNode* left;
		TreeNode* right;
	};
	TreeNode* root;

	void destroySubTree(TreeNode*);
	void deleteNode(int, TreeNode*&);
	void makeDeletion(TreeNode*&);
	void displayInOrder(TreeNode*);
	void displayPreOrder(TreeNode*);
	void displayPostOrder(TreeNode*);
}

public:	IntBinaryTree()		// Constructor		
{ root = NULL; }	~IntBinaryTree()	// Destructor		
{ destroySubTree(root); }	
			void insertNode(int);	
			bool searchNode(int);	
			void remove(int);	
			void showNodesInOrder(void)		{	displayInOrder(root); }	
			void showNodesPreOrder()		{	displayPreOrder(root); }	
			void showNodesPostOrder()		{	displayPostOrder(root); }};
