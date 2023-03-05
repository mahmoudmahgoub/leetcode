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
    int traverse_sum(TreeNode* node,int & low, int& high){
        if(node == nullptr)
        return 0;
        int res = 0;
        res+=traverse_sum(node->left,low,high);
        if(node->val>=low && node->val<= high)
        res+=node->val;
        res+=traverse_sum(node->right,low,high);
        return res;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return traverse_sum(root,low,high);

        
    }
};