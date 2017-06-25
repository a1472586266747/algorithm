#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

struct  treeNode
{
	treeNode() {
		val = 0;
		this->left = NULL;
		this->right = NULL;
	}
	int val;
	treeNode *left;
	treeNode *right;
};


int main() {
	treeNode *node = new treeNode;
	treeNode *root = new treeNode;


	/*

	           1
	          / \
          2    3
	       / \
	      4   5

	*/
	root->val = 1;
	node->val = 2;
	root->left = node;
	node = new treeNode;
	node->val = 3;
	root->right = node;
	node = new treeNode;
	node->val = 4;
	root->left->left = node;
	node = new treeNode;
	node->val = 5;
	root->left->right = node;

	return 0;
}
