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
    vector<int>vec1;
    vector<int>vec2;
    
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if (p == nullptr && q == nullptr) { //if two trees are empty returns are same
            return true;
        }

        if (p == nullptr || q == nullptr) {//if only one of them empty returns not same
            return false;
        }
        //else check the first value pointer to it
        return (p->val == q->val &&
                isSameTree(p->left, q->left) &&//with recursion in left node
                isSameTree(p->right, q->right));//with recursion in right node
    }
};