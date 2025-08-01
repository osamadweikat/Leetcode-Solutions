/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftDepth = getDepth(root, true);
        int rightDepth = getDepth(root, false);

        if (leftDepth == rightDepth) {
            return (1 << leftDepth) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

private:
    int getDepth(TreeNode* node, bool left) {
        int depth = 0;
        while (node) {
            depth++;
            node = (left ? node->left : node->right);
        }
        return depth;
    }
};
