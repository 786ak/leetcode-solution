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
    unordered_map<int,int>m;
    int idx=0;
    
    TreeNode* make(vector<int>&pre,int left,int right)
    {
        if(left>right) return NULL;
        
        int val=pre[idx++];
        TreeNode* root = new TreeNode(val);
        
        root->left=make(pre,left,m[val]-1);
        root->right=make(pre,m[val]+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        for(int i=0;i<size(inorder);i++) m[inorder[i]]=i;
        return make(preorder,0,preorder.size()-1);
    }
};
