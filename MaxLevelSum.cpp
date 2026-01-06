// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/?envType=daily-question&envId=2026-01-06

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
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        int level = 1;
        queue<TreeNode*> bfs;
        bfs.push(root);
        int maxv = INT_MIN, maxi = -1;
        while(!bfs.empty())
        {
            int sum = 0;
            int size = bfs.size();
            for(int i = 0 ; i < size; i++)
            {
                TreeNode* curr = bfs.front();
                bfs.pop();
                sum += curr->val;
                if(curr->left)
                    bfs.push(curr->left);
                if(curr->right)
                    bfs.push(curr->right);
            }
            if(maxv < sum)
            {
                maxv = sum;
                maxi = level;
            }
            level++;
        }
        
        return maxi;
    }
};
