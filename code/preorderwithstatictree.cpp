#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
#include<vector>
#include<stack>
#include<queue>
#define MAX 1024

using namespace std;

struct treeNode {
	treeNode() {
		left = -1;
		right = -1;
	}
	int val;
	int left;
	int right;
}node[MAX];

void preOrder(int root) {
	if (root == -1)
		return;
	cout << node[root].val << " ";
	if(node[node[root].left].val)
	preOrder(node[root].left);
	if (node[node[root].right].val)
	preOrder(node[root].right);
}

int main() {

	int n;

	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			node[i].val = i;
			node[i].left = 2 * i;
			node[i].right = 2 * i + 1;

		}
		preOrder(1);
	}




	/*

						    1
						  /   \
						 2     3
						/ \   / \
					 4   5 6   7

					   n=7
	*/



	return 0;
}
