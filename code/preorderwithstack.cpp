/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: Preorder in vector which contains node values.
     */

    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        stack<TreeNode*> st;
        vector<int> preorder;
        if (root == NULL) {
            return preorder;
        }

        st.push(root);
        while (!st.empty()) {
            TreeNode *node = st.top();
            st.pop();
            preorder.push_back(node->val);
            if (node->right != NULL) {
                st.push(node->right);
            }
            if (node->left != NULL) {
                st.push(node->left);
            }
        }

        return preorder;

    }
};
