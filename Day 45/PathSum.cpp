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
    void solve(TreeNode* root,int target,int sum,bool& ans)
    {
        if(root==NULL)
        return;
        sum+=root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            if(sum==target)
            ans=1;
            return;
        }
        solve(root->left,target,sum,ans);
        if(ans)
        return;
        solve(root->right,target,sum,ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        return 0;
        bool ans=0;
        solve(root,targetSum,0,ans);
        return ans;
    }
};