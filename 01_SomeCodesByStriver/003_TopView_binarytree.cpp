
// Top view of a binary tree ..
// here first node of every line(column) will be printed
#include<bits/stdc++.h>
using namespace std;

// This snippet is working with a C++ STL map. Let’s break it down step by step:
// map<int, int> mpp;
// if (mpp.find(line) == mpp.end()) {
//     mpp[line] = node->val;
// }
// Explanation:
// map<int, int> mpp;
// Declares a map where both the key and the value are integers.
// Keys are unique and automatically sorted in ascending order.
// Example: mpp[3] = 10; mpp[1] = 20;
// → internally stored as {1: 20, 3: 10}.
// mpp.find(line)
// find(key) looks for key inside the map.
// If the key exists → returns an iterator pointing to that element.
// If not found → returns mpp.end() (special iterator meaning "not found").
// if (mpp.find(line) == mpp.end())
// This checks if the key line does not exist in the map.
// mpp[line] = node->val;
// Inserts a new entry where:
// Key = line
// Value = node->val
// If line already existed, it would update the value.
// But since we checked with find, this only runs when the key isn’t there (so it behaves like insert if not present).

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) : val(data), left(nullptr), right(nullptr) {}
};

vector<int> topview(TreeNode* root, vector<int> &ans){
    if(root == NULL){
        return ans;
    }
    map<int, int>mpp;
    queue<pair<TreeNode*, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode* node = it.first;
        int line = it.second;
        if(mpp.find(line)==mpp.end()){
            mpp[line] = node->val;
        }
        if(node->left){
            q.push({node->left, line-1});
        }
        if(node->right){
            q.push({node->right, line+1});
        }
    }

    for(auto it : mpp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    // Create a sample binary tree:
    //         1
    //        / \
    //       2   3
    //      / \   \
    //     4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int>ans;
    topview(root, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}