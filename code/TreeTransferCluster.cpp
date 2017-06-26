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
		index = 0;
		val = 0;
		this->left = NULL;
		this->right = NULL;
	}
	int val;
	int index;
	vector<int> cluster;
	treeNode *left;
	treeNode *right;
};

void recordCluster(treeNode *root) {
	if (root == NULL){
		return;
	}
	vector <int>::iterator it;
	recordCluster(root->left);
	recordCluster(root->right);
	if (root->left != NULL) {
		for (it = root->left->cluster.begin();it!=root->left->cluster.end();it++) {
			root->cluster.push_back(*it);
		}
	}
	if (root->right != NULL) {
		for (it = root->right->cluster.begin(); it != root->right->cluster.end(); it++) {
			root->cluster.push_back(*it);
		}
	}
	if(root->left == NULL && root->right == NULL){
		root->cluster.push_back(root->index);
	}

}

int main() {
	treeNode *node = new treeNode;
	treeNode *root = new treeNode;


	/*

						    1
						  /   \
						 2     3
						/ \   / \
					   4   5 6   7


					   	 {4,5,6,7}
						  /    \
					   {4,5}  {6,7}
						/ \    / \
					  {4} {5} {6}{7}


	*/
	root->index = 1;
	node->index = 2;
	root->left = node;
	node = new treeNode;
	node->index = 3;
	root->right = node;
	node = new treeNode;
	node->index = 4;
	root->left->left = node;
	node = new treeNode;
	node->index = 5;
	root->left->right = node;
	node = new treeNode;
	node->index = 6;
	root->right->left = node;
	node = new treeNode;
	node->index = 7;
	root->right->right = node;




	recordCluster(root);

	vector<int>::iterator it;
	for (it = root->cluster.begin(); it != root->cluster.end(); it++)
		cout << *it << " ";
	cout << endl;





	return 0;
}
