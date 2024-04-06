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
    void solve(TreeNode* root,string curr,vector<string>& ans)
    {
        if(curr.length()==0)
            curr=curr+to_string(root->val);
        else
            curr=curr+"->"+to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            if(curr.length()>0)
            ans.push_back(curr);
            return;
        }
        if(root->left!=NULL)
            solve(root->left,curr,ans);
        if(root->right!=NULL)
            solve(root->right,curr,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root,"",ans);
        return ans;
    }
};