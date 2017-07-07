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

void Inorder(treeNode* root) {
	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->val;
	Inorder(root->right);
}

void InorderWithStack(treeNode* root) {
	if (root == NULL) {
		return;
	}
	stack<treeNode*> st;
	while (!st.empty() || root) {
		if (root) {
			st.push(root);
			root = root->left;
		}
		else {
			root = st.top();
			st.pop();
			cout << root->val;
			root = root->right;
		}
	}
}

int main() {
	treeNode *node = new treeNode;
	treeNode *root = new treeNode;


	/*

	           1
	         /  \
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

	InorderWithStack(root);

	return 0;
}
