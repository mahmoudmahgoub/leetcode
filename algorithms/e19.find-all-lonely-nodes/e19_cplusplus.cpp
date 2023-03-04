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

//time O(n), space O(n+h) //n for result, h(tree depth) for recursive 
/*
class Solution {
public:
    
    void traverse( TreeNode* root,vector<int> & lonely){
        if(root == nullptr) return;
        
        if (root->left!=nullptr && root->right == nullptr) 
            lonely.push_back(root->left->val);
           
        else if (root->right!=nullptr && root->left == nullptr) 
            lonely.push_back(root->right->val);
    traverse(root->right,lonely);
    traverse(root->left,lonely);
         
    }
    vector<int> getLonelyNodes(TreeNode* root) {
        
        vector<int> res;
        traverse(root,res);
        return res;
        
    }
};*/

//time O(n), space O(n+h) //n for result, h(tree depth) for recursive
//no pass by val for result, it is slower because of concats of vectors
/*class Solution {
public:

    vector<int> getLonelyNodes(TreeNode* root) {
        if(root == nullptr) return {};
        vector<int>  lonely;
        if (root->left!=nullptr && root->right == nullptr){  
            lonely.push_back(root->left->val);   
        }
           
        else if (root->right!=nullptr && root->left == nullptr) 
            lonely.push_back(root->right->val);
        vector<int>  lonelyR = getLonelyNodes(root->right);
        vector<int>  lonelyL = getLonelyNodes(root->left);
        lonely.insert( lonely.end(), lonelyR.begin(), lonelyR.end() );
        lonely.insert( lonely.end(), lonelyL.begin(), lonelyL.end() );
        return lonely;
    }
};
*/

//time O(n), space O(n+h) //n for result, h(tree depth) for recursive
//iterative sol
class Solution {
public:

    vector<int> getLonelyNodes(TreeNode* root) {
        if(root == nullptr) return {};
        vector<int>  lonely;
        stack<TreeNode*> myStack;
        myStack.push(root);
        auto curr = root;
        while(!myStack.empty()){
            while (curr->left!=nullptr)
            {
               if (curr->right == nullptr)
                 lonely.push_back(curr->left->val); 
               myStack.push(curr->left);  
               curr = curr->left;
            }
            curr = myStack.top();
            myStack.pop();   
              
            if  (curr->right!=nullptr){ 
                if (curr->left == nullptr)
                    lonely.push_back(curr->right->val);
               myStack.push(curr->right);
                curr = curr->right;
            } 
            
        }
        return lonely;
    }
};

//nice sol using lambda
/*
class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> result;
        
        function<int(TreeNode*)> search = [&](TreeNode* u) -> int {
            if (!u) return 0;
            
            int l = search(u->left);
            int r = search(u->right);
            
            bool is_leaf = l == 0 && r == 0
            bool has_two_children = l > 0 && r > 0;
            if (!is_leaf && !has_two_children) result.push_back(l + r);
            
            return u->val;
        };
        
        search(root);
        
        return result;
    }
};
*/
