
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
private:
int sum = 0;
bool traverseTree(TreeNode* root,int targetSum) {
    if(root == nullptr){
        return false; 
}

    sum += root->val;
    if(sum == targetSum){
        if(!(root->left) && !(root->right))
            return true;  //sum -= root->val; //no need to return the previous state in case of true as problem ended
    }
    bool isFound1 = traverseTree(root->left,targetSum);
    bool isFound2 = false;
    if(!isFound1) {
        isFound2 = traverseTree(root->right,targetSum);
    }
    sum -= root->val;
return isFound1||isFound2;
}
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverseTree(root,targetSum);
        
    }
};
