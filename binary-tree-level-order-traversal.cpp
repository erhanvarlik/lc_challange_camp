/*
Works like bfs.
Time complexity O(n) visiting every node
Space complexity O(n) queue cost
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if (root == NULL) return vec; // ?????????
        queue<TreeNode*> pq;
        pq.push(root);
        while(!pq.empty()){
            vector<int> innerVec;
            int size = pq.size();
            for(int i=0; i<size; i++){
                TreeNode* top = pq.front();
                pq.pop();
                innerVec.push_back(top->val);
                if(top->left != NULL){
                    pq.push(top->left);
                }
                if(top->right != NULL){
                    pq.push(top->right);
                }
            }
            vec.push_back(innerVec);
        }
    
        return vec;
    }
};
