/*
Branch for left & right (if available) node until a leaf, and get maximum of them.
Simply we can think of DFS.
time complexity O(n) since we are gonna visit every node.
space complexity O(n) since we are gonna store the distance between the nodes and leaf to calculate max
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        else if(root->left == NULL && root->right != NULL){
            return maxDepth(root->right) + 1;
        }
        else if(root->left != NULL && root->right == NULL){
            return maxDepth(root->left) + 1;
        }else{
            return max(maxDepth(root->right), maxDepth(root->left))+1;
        }
    }
};
