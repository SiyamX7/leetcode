#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(8);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    return root;
}

vector<vector<int>> bfs(TreeNode* root){
    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int sz = q.size();
        vector<int> temp(sz);

        for(int i = 0; i < sz; i++){
            TreeNode* current = q.front();
            q.pop();
            temp.push_back(current->val);
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        res.push_back(temp);
    }
    return res;
}


int main() {
    TreeNode* root = buildTree();
    cout << "level order traversal: " << endl;
    vector<vector<int>> v;
    v = bfs(root);

    for(auto val : v){
        for(auto x : val){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}