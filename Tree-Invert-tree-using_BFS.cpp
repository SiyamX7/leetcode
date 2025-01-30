#include <bits/stdc++.h>
using namespace std;                   

struct Node{
	int val;
	Node* left;
	Node* right;
	Node(int data) : val(data), left(nullptr), right(nullptr){}
};

class Solution {
public:
	Node* invertTree(Node* root){
		if(root == nullptr) return root;

		queue <Node*> q;
		q.push(root);
		while(!q.empty()){
			Node* current = q.front();
			q.pop();
			swap(current->left, current->right);

			if(current->left) q.push(current->left);
			if(current->right) q.push(current->right);
		}
		return root;
	}

	void bfs(Node *root){
		if(root == nullptr){
			cout << "Root is empty" << endl;
			return;
		}

		queue<Node*> q;
		q.push(root);

		while(!q.empty()){
			Node* current = q.front();
			cout << current->val << " ";
			q.pop();

			if(current->left){
				// cout << current->left->val << " ";
				q.push(current->left);
			}

			if(current->right){
				// cout << current->right->val << " ";
				q.push(current->right);
			}
		}
	}
};

int main() {
	Node* root = new Node(4); //Tree(int data) : val(data), left(nullptr), right(nullptr){}
	root->left = new Node(2);
	root->right = new Node(7);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right->left = new Node(6);
	root->right->right = new Node(9);

	Solution sol;
	Node* r = sol.invertTree(root);
	sol.bfs(root);
}