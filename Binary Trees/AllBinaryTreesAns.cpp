#include <bits/stdc++.h>
using namespace std;

// Given an array ’arr’that contains 7 integers representing the values of nodes in binary tree. This represents level order. The ?rst element of the array represents the value of the root node. Your objective is to construct a binary tree using the remaining 6 elements of the array, creating nodes for each of these values and return root node.

// class Node
// {
// public:
//     int data;
//     Node *left, *right;
//     Node()
//     {
//         this->data = 0;
//         left = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
//     Node(int data, Node *left, Node *right)
//     {
//         this->data = data;
//         this->left = left;
//         this->right = right;
//     }
// };

// Node *createTree(vector<int> &arr)
// {
//     queue<Node *> q;
//     Node *root = new Node(arr[0]);
//     q.push(root);
//     int i = 0;
//     while (!q.empty() && i < 3)
//     {
//         Node *temp = q.front();
//         q.pop();
//         Node *left = new Node(arr[2 * i + 1]);
//         temp->left = left;
//         q.push(left);
//         Node *right = new Node(arr[2 * i + 2]);
//         temp->right = right;
//         q.push(right);
//         i++;
//     }
//     return root;
// }

// You have been given a Binary Tree of ’N’
// nodes, where the nodes have integer values.
// Your task is to return the ln—Order, Pre—Order, 0nd Post—Order troversols of the
// given binary tree.

// class TreeNode
// {
// public:
//     int data;
//     TreeNode *left, *right;
//     TreeNode() : data(0), left(NULL), right(NULL) {}
//     TreeNode(int x) : data(x), left(NULL), right(NULL) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
// };

// void intr(TreeNode *root, vector<vector<int>> &ans, vector<int> &invec)
// {
//     vector<int> a;
//     if (!root)
//     {
//         return;
//     }
//     // left root right
//     intr(root->left, ans, invec);
//     invec.push_back(root->data);
//     intr(root->right, ans, invec);
// }
// void postord(TreeNode *root, vector<vector<int>> &ans, vector<int> &invec)
// {
//     if (!root)
//     {
//         return;
//     }
//     postord(root->left, ans, invec);
//     postord(root->right, ans, invec);
//     invec.push_back(root->data);
// }
// void preord(TreeNode *root, vector<vector<int>> &ans, vector<int> &invec)
// {
//     if (!root)
//     {
//         return;
//     }
//     invec.push_back(root->data);
//     preord(root->left, ans, invec);
//     preord(root->right, ans, invec);
// }

// vector<vector<int>> getTreeTraversal(TreeNode *root)
// {
//     vector<vector<int>> ans;
//     vector<int> temp;
//     intr(root, ans, temp);
//     ans.push_back(temp);
//     temp.clear();
//     preord(root, ans, temp);
//     ans.push_back(temp);
//     temp.clear();
//     postord(root, ans, temp);
//     ans.push_back(temp);
//     return ans;
// }

// bfs/level order traversal :

// vector<vector<int>> levelOrder(TreeNode *root)
// {
//     queue<TreeNode *> q;
//     vector<vector<int>> lvlordr;
//     if (!root)
//         return lvlordr;
//     q.push(root);
//     while (!q.empty())
//     {
//         vector<int> level;
//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//             level.push_back(temp->data);
//         }
//         lvlordr.push_back(level);
//     }
//     return lvlordr;
// }

// iterative traversals:

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// vector<int> preorderTraversal(TreeNode *root)
// {
//     vector<int> ans;
//     if (!root)
//         return {};
//     stack<TreeNode *> s;
//     s.push(root);
//     while (!s.empty())
//     {
//         TreeNode *temp = s.top();
//         s.pop();
//         ans.push_back(temp->val);
//         if (temp->right)
//             s.push(temp->right);
//         if (temp->left)
//         {
//             s.push(temp->left);
//         }
//     }
//     return ans;
// }

// morris traversal:
// sc:constant
// tc :o(n)

// vector<int> preorderTraversal(TreeNode *root)
// {
//     vector<int> preorder;
//     TreeNode *cur = root;
//     while (cur != nullptr)
//     {
//         if (cur->left == nullptr)
//         {
//             preorder.push_back(cur->val);
//             cur = cur->right;
//         }
//         else
//         {
//             TreeNode *prev = cur->left;
//             while (prev->right != nullptr && prev->right != cur)
//             {
//                 prev = prev->right;
//             }
//             if (prev->right == nullptr)
//             {
//                 prev->right = cur;
//                 preorder.push_back(cur->val);
//                 cur = cur->left;
//             }
//             else
//             {
//                 prev->right = nullptr;
//                 cur = cur->right;
//             }
//         }
//     }
//     return preorder;
// }

// iterative inorder:

// vector<int> inorderTraversal(TreeNode *root)
// {
//     stack<TreeNode *> s;
//     vector<int> ans;
//     TreeNode *cur = root;
//     while (cur || !s.empty())
//     {
//         if (cur)
//         {
//             s.push(cur);
//             cur = cur->left;
//         }
//         else
//         {
//             TreeNode *temp = s.top();
//             s.pop();
//             ans.push_back(temp->val);
//             cur = temp->right;
//         }
//     }
//     return ans;
// }

// vector<int> inorderTraversal(TreeNode *root)
// {
//     vector<int> ans;
//     stack<TreeNode *> s;
//     TreeNode *temp = root;
//     while (temp || !s.empty())
//     {
//         while (temp != NULL)
//         {
//             s.push(temp);
//             temp = temp->left;
//         }
//         temp = s.top();
//         s.pop();
//         ans.push_back(temp->val);
//         temp = temp->right;
//     }
//     return ans;
// }

// morrison iterative inorder:

// vector<int> inorderTraversal(TreeNode *root)
// {
//     vector<int> ans;
//     TreeNode *cur = root;
//     TreeNode *pre;
//     while (cur)
//     {
//         if (cur->left == NULL)
//         {
//             ans.push_back(cur->val);
//             cur = cur->right;
//         }
//         else
//         {
//             pre = cur->left;
//             while (pre->right)
//             {
//                 pre = pre->right;
//             }
//             pre->right = cur;
//             TreeNode *t = cur;
//             cur = cur->left;
//             t->left = NULL;
//         }
//     }
//     return ans;
// }

// iterative post order:
// 2 stack:

// vector<int> postorderTraversal(TreeNode *root)
// {
//     if (!root)
//         return ans;
//     stack<TreeNode *> s1, s2;
//     s1.push(root);
//     vector<int> ans;
//     while (!s1.empty())
//     {
//         auto it = s1.top();
//         s1.pop();
//         s2.push(it);
// left pehle push so bad me remove from s1 so bad me insert in s2 so pehle while popping from s2 :)
//         if (it->left)
//             s1.push(it->left);
//         if (it->right)
//             s1.push(it->right);
//     }
//     while (!s2.empty())
//     {
//         ans.push_back(s2.top()->val);
//         s2.pop();
//     }return ans;
// }

// 1 stack:

// vector<int> postorderTraversal(TreeNode *root)
// {
//     if (!root)
//     {
//         return {};
//     }
//     stack<TreeNode *> s;
//     vector<int> ans;
//     s.push(root);
//     while (!s.empty())
//     {
//         TreeNode *t = s.top();
//         s.pop();
//         ans.push_back(t->val);
//         if (t->left)
//         {
//             s.push(t->left);
//         }
//         if (t->right)
//         {
//             s.push(t->right);
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// striver way:
// tc :2n for skewed as right skewed then inner root wali while loop runs for n making it 2n overall
// vector<int> postorderTraversal(TreeNode *root)
// {
//     if (!root)
//         return {};
//     stack<TreeNode *> s;
//     vector<int> ans;
//     TreeNode *cur = root;
//     while (cur || !s.empty())
//     {
//         if (cur)
//         {
//             s.push(cur);
//             cur = cur->left;
//         }
//         else
//         {
//             TreeNode *temp = s.top()->right;
//             if (temp != NULL)
//             {
//                 cur = temp;
//             }
//             else
//             {
//                 temp = s.top();
//                 // cur null and temp is null so no left and no right so jaha hai woh ans me dalo
//                 ans.push_back(temp->val);
//                 s.pop();
//                 // now check if it has root or not if has add it to ans take right skewd as example you will get ,root vali while loop
//                 while (!s.empty() && s.top()->right == temp)
//                 {
//                     temp = s.top();
//                     ans.push_back(temp->val);
//                     s.pop();
//                 }
//             }
//         }
//     }
//     return ans;
// }

// push two times :
//  The algorithm is that we push each node twice onto the stack. Each time we pop a node out, if we see that there is a same node on the stack, we know that we have not done traversing yet, and need to keep pushing the current node's children onto the stack. However, if the stack is empty, or the top element is not the same as the current element, we know that we're done searching with this node, thus we can add this node to the result.

// vector<int> postorderTraversal(TreeNode *root)
// {
//     if (!root)
//         return {};
//     stack<TreeNode *> s;
//     TreeNode *cur;
//     vector<int> ans;
//     s.push(root);
//     s.push(root);
//     while (!s.empty())
//     {
//         cur = s.top();
//         s.pop();
//         if (!s.empty() && s.top() == cur)
//         {
//             // traversing not done yet:
//             // take right or left first done by dry run:
//             if (cur->right)
//             {
//                 s.push(cur->right);
//                 s.push(cur->right);
//             }
//             if (cur->left)
//             {
//                 s.push(cur->left);
//                 s.push(cur->left);
//             }
//         }
//         else
//         {
//             // not same so add  in ans
//             ans.push_back(cur->val);
//         }
//     }
//     return ans;
// }

// Preorder Inorder Postorder Traversals in One Traversal

// void allTraversal(TreeNode *root, vector<int> &pre, vector<int> &in, vector<int> &post)
// {
//     // second indicates the visit :
//     stack<pair<TreeNode *, int>> s;
//     TreeNode *cur = root;
//     s.push({root, 1});
//     vector<int> pre;
//     vector<int> in;
//     vector<int> post;
//     while (!s.empty())
//     {
//         auto it = s.top();
//         s.pop();
//         if (it.second == 1)
//         {
//             // first visit ans it in preorder:
//             pre.push_back(it.first->val);
//             it.second++;
//             s.push(it);
//             if (it.first->left)
//             {
//                 s.push({it.first->left, 1});
//             }
//         }
//         else if (it.second == 2)
//         {
//             in.push_back(it.first->val);
//             it.second++;
//             s.push(it);
//             if (it.first->right)
//             {
//                 s.push({it.first->right, 1});
//             }
//         }
//         else if (it.second == 3)
//         {
//             post.push_back(it.first->val);
//         }
//     }
//     return;
// }

// 104. Maximum Depth of Binary Tree
// Given the root of a binary tree, return its maximum depth.

// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

// recursive approach
//  sc=tc=n

// int help(TreeNode *root)
// {
//     if (!root)
//         return 0;
//     int left = 1 + help(root->left);
//     int right = 1 + help(root->right);
//     return max(left, right);
// }

// int maxDepth(TreeNode *root)
// {
//     return help(root);
// }

// int maxDepth(TreeNode *root)
// {
//     int ans = 0;
//     queue<TreeNode *> q;
//     TreeNode *cur = root;
//     q.push(cur);
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             TreeNode *t = q.front();
//             q.pop();
//             if (t->left)
//                 q.push(t->left);
//             if (t->right)
//                 q.push(t->right);
//         }
//         ans++;
//     }
//     return ans;
// }

// 110. Balanced Binary Tree:Given a binary tree, determine if it is height-balanced.A height-balanced binary tree is defined as a binary tree in which the height of the left and the right subtree of any node differ by not more than 1.

// jate trial ignore :

// int help(TreeNode *root)
// {
//     if (!root)
//         return 0;
//     int left = 1 + help(root->left);
//     int right = 1 + help(root->right);
//     return max(left, right);
// }

// int maxDepth(TreeNode *root)
// {
//     return help(root);
// }

// bool isBalanced(TreeNode *root)
// {
//     if (!root)
//         return true;
//     TreeNode *temp = root;
//     vector<TreeNode *> el;
//     stack<TreeNode *> s;
//     s.push(temp);
//     while (!s.empty())
//     {
//         temp = s.top();
//         s.pop();
//         el.push_back(temp);
//         if (temp->right)
//             s.push(temp->right);
//         if (temp->left)
//             s.push(temp->left);
//     }
//     for (auto it : el)
//     {
//         if (abs(maxDepth(it->left) - maxDepth(it->right)) > 1)
//             return false;
//     }
//     return true;
// }

// int help(TreeNode *r)
// {
//     if (!r)
//         return 0;
//     int left = help(r->left);
//     int right = help(r->right);
//     if (left == -1 || right == -1 || abs(left - right) > 1)
//     {
//         return -1;
//     }
//     return max(left, right) + 1;
// }

// bool isBalanced(TreeNode *root)
// {
//     return help(root) == -1 ? false : true;
// }

// 543. Diameter of Binary Tree
// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

// int h(TreeNode *root, int &ans)
// {
//     if (!root)
//         return 0;
//     int l = h(root->left, ans);
//     int ri = h(root->right, ans);
//     ans = max(ans, l + ri);
//     return 1 + max(ri, l);
// }

// int diameterOfBinaryTree(TreeNode *root)
// {
//     int ans = 0;
//     h(root, ans);
//     return ans;
// }

// 124. Binary Tree Maximum Path Sum
// A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

// The path sum of a path is the sum of the node's values in the path.

// Given the root of a binary tree, return the maximum path sum of any non-empty path.

// int help(TreeNode *cur, int &maxi)
// {
//     if (!cur)
//         return 0;
//     int left = max(help(cur->left, maxi), 0);
//     int right = max(help(cur->right, maxi), 0);
//     maxi = max(maxi, left + right + cur->val);
//     return max(cur->val + left, right + cur->val);
// }

// int maxPathSum(TreeNode *root)
// {
//     int maxi = INT_MIN;
//     int temp = help(root, maxi);
//     return maxi;
// }

// int help(TreeNode *cur, int &maxi)
// {
//     if (!cur)
//         return 0;
//     int left = help(cur->left, maxi);
//     int right = help(cur->right, maxi);
//     // ya toh ek lo joke root hai ya fir left+ root ya fir right+ root ya fir root +left+right lo 4 mese max lena hai
//     int maxLeftRight = max(left, right);
//     int maxOneNode = max(maxLeftRight + cur->val, cur->val);
//     int fmax = max(maxOneNode, left + right + cur->val);
//     maxi = max(maxi, fmax);
//     return maxOneNode;
// }

// int maxPathSum(TreeNode *root)
// {
//     int ans = INT_MIN;
//     help(root, ans);
//     return ans;
// }

// int help(TreeNode *cur, int gmax)
// {
//     if (!cur)
//         return 0;
//     int left = help(cur->left, gmax);
//     int right = help(cur->right, gmax);
//     int maxi = max({cur->val,
//                     left + cur->val,
//                     right + cur->val,
//                     cur->val + left + right});
//     gmax = max(maxi, gmax);
//     return max({cur->val,
//                 left + cur->val,
//                 right + cur->val});
//     // Why didn't we include current node.val + node. left + node.right in the last line while returning value? Because, for current node's parent node, if we were to include node.val + node.left +node.right in the maxPathSum, it would VIOLATE the PRINCIPLE that we can only traverse each node ONCE!!! Since its IMPOSSIBLE to traverse from node->left->right->node's parent without re-visiting node itself, we cannot include node.val + node.left + node.right in the return value!
// }

// int maxPathSum(TreeNode *root)
// {
//     int ans = INT_MIN;
//     help(root, ans);
//     return ans;
// }

// https://leetcode.com/problems/binary-tree-maximum-path-sum/discuss/603072/C%2B%2B-solution-O(n)-with-detailed-explanation

// 1.I can choose to take up the left subtree or drop it.
// 2.I can either choose to take up the right subtree or drop it.
// 3.I check for a possibility whether if i were to take both left subtree and right subtree would that beat my current max_sum?
// Lets consider

// int help(TreeNode *root, int &ans)
// {
//     if (!root)
//         return 0;
//     int left = max(help(root->left, ans), 0);
//     int right = max(help(root->right, ans), 0);
//     ans = max(ans, left + right + root->val);
//     // or not consider current subtree :
//     return max(left, right) + root->val;
// }

// int maxPathSum(TreeNode *root)
// {
//     int ans = INT_MIN;
//     help(root, ans);
//     return ans;
// }

// 100. Same Tree: Given the roots of two binary trees p and q, write a function to check if they are the same or not.

// Two binary trees are considered the same if they are structurally identical, and the nodes have the same value

// bool help(TreeNode *p, TreeNode *q)
// {
//     if (p == NULL && q == NULL)
//         return true;
//     if ((!p && q) || (p && !q))
//         return false;
//     if (p->val != q->val)
//         return false;
//     return help(p->left, q->left) &&
//            help(p->right, q->right);
// }

// bool isSameTree(TreeNode *p, TreeNode *q)
// {
//     return help(p, q);
// }

// 103. Binary Tree Zigzag Level Order Traversal:Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

// vector<vector<int>> zigzagLevelOrder(TreeNode *root)
// {
//     if (!root)
//         return {};
//     vector<vector<int>> ans;
//     queue<TreeNode *> q;
//     TreeNode *cur = root;
//     q.push(cur);
//     bool ltor = true;
//     int t = 0;
//     while (!q.empty())
//     {
//         int sz = q.size();
//         vector<int> lvl(q.size());
//         for (int i = 0; i < sz; i++)
//         {
//             int ind = ltor ? i : sz - 1 - i;
//             TreeNode *temp = q.front();
//             lvl[ind] = temp->val;
//             q.pop();
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         ltor = !ltor;
//         ans.push_back(lvl);
//     }
//     return ans;
// }

// vector<vector<int>> zigzagLevelOrder(TreeNode *root)
// {
//     if (!root)
//         return {};
//     vector<vector<int>> ans;
//     deque<TreeNode *> q;
//     q.push_back(root);
//     bool ltor = true;
//     while (!q.empty())
//     {
//         vector<int> lvl;
//         int sz = q.size();
//         while (sz--)
//         {
//             TreeNode *temp;
//             if (ltor)
//             {
//                 temp = q.front();
//                 lvl.push_back(temp->val);
//                 q.pop_front();
//                 if (temp->left)
//                 {
//                     q.push_back(temp->left);
//                 }
//                 if (temp->right)
//                 {
//                     q.push_back(temp->right);
//                 }
//             }
//             else
//             {
//                 temp = q.back();
//                 q.pop_back();
//                 lvl.push_back(temp->val);
//                 if (temp->right)
//                 {
//                     q.push_front(temp->right);
//                 }
//                 if (temp->left)
//                 {
//                     q.push_front(temp->left);
//                 }
//             }
//         }
//         ans.push_back(lvl);
//         ltor = !ltor;
//     }
//     return ans;
// }

// Boundary Traversal of binary tree:
// Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order:
// Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree.
// Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
// Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
// Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary.

struct Node
{
    int data;
    Node *left, *right;
};

// void addLeftLeaf(Node *cur, vector<int> &res)
// {
//     while (cur)
//     {
//         if (!(cur->left == NULL && cur->right == NULL))
//             res.push_back(cur->data);
//         if (cur->left)
//             cur = cur->left;
//         else
//         {
//             cur = cur->right;
//         }
//     }
//     return;
// }
// bool isLeaf(Node *cur)
// {
//     return (cur->left == NULL && cur->right == NULL);
// }
// void addLeaf(Node *cur, vector<int> &res)
// {
//     if (!cur)
//         return;
//     if (isLeaf(cur))
//     {
//         res.push_back(cur->data);
//     }
//     if (cur->left)
//         addLeaf(cur->left, res);
//     if (cur->right)
//         addLeaf(cur->right, res);
// }
// void addRightTree(Node *cur, vector<int> &res)
// {
//     while (cur)
//     {
//         if (!isLeaf(cur))
//         {
//             res.push_back(cur->data);
//         }
//         if (cur->right)
//         {
//             cur = cur->right;
//         }
//         else
//         {
//             cur = cur->left;
//         }
//     }
// }
// vector<int> boundary(Node *root)
// {
//     Node *cur = root;
//     vector<int> ans;
//     if (!isLeaf(cur))
//         ans.push_back(root->data);
//     addLeftLeaf(cur->left, ans);
//     cur = root;
//     addLeaf(cur, ans);
//     cur = root;
//     vector<int> t;
//     addRightTree(cur->right, t);
//     reverse(t.begin(), t.end());
//     for (auto it : t)
//     {
//         ans.push_back(it);
//     }
//     return ans;
// }

// 987. Vertical Order Traversal of a Binary Tree:Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

// For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

// The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

// Return the vertical order traversal of the binary tree.

// tried but didnt done :(

// struct PairHash
// {
//     template <typename T, typename U>
//     std::size_t operator()(const std::pair<T, U> &p) const
//     {
//         return std::hash<T>()(p.first) ^ std::hash<U>()(p.second);
//     }
// };

// struct PairEqual
// {
//     template <typename T, typename U>
//     bool operator()(const std::pair<T, U> &lhs, const std::pair<T, U> &rhs) const
//     {
//         return lhs.first == rhs.first && lhs.second == rhs.second;
//     }
// };

// void inans(TreeNode *cur, std::unordered_map<std::pair<int, int>, vector<int>, PairHash, PairEqual> &ans, int row, int col)
// {
//     if (!cur)
//         return;
//     inans(cur->left, ans, col + 1, row - 1);
//     ans[{col, row}].push_back(cur->val);
//     inans(cur->right, ans, col + 1, row + 1);
// }

// vector<vector<int>> verticalTraversal(TreeNode *root)
// {
//     std::unordered_map<std::pair<int, int>, vector<int>, PairHash, PairEqual> m;
//     vector<vector<int>> ans;
//     int row = 0, col = 0;
//     inans(root, m, col, row);
//     map<int, vector<int>> sortt;
//     for (auto it : m)
//     {
//         sortt[it.first.first].insert(sortt[it.first.second].end(), it.second.begin(), it.second.end());
//     }
//     for (auto it : sortt)
//     {
//         ans.push_back(it.second);
//     }
//     return ans;
// }

// vector<vector<int>> verticalTraversal(TreeNode *root)
// {
//     if (!root)
//         return {};
//     // (vertical,level,set)
//     map<int, map<int, multiset<int>>> ds;
//     queue<pair<TreeNode *, pair<int, int>>> q;
//     // (v,level)
//     TreeNode *cur = root;
//     q.push({cur,
//             {0, 0}});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto te = q.front();
//             TreeNode *tenode = te.first;
//             ds[te.second.first][te.second.second].insert(tenode->val);
//             auto it = q.front();
//             q.pop();
//             if (it.first->left)
//             {
//                 q.push({it.first->left, {it.second.first - 1, it.second.second + 1}});
//             }
//             if (it.first->right)
//             {
//                 q.push({it.first->right, {it.second.first + 1, it.second.second + 1}});
//             }
//         }
//     }
//     vector<vector<int>> ans;
//     for (auto it : ds)
//     {
//         vector<int> cols;
//         for (auto q : it.second)
//         {
//             cols.insert(cols.end(), q.second.begin(), q.second.end());
//         }
//         ans.push_back(cols);
//     }
//     return ans;
// }

// // recursive version:

// void help(TreeNode *root, map<int, map<int, multiset<int>>> &mp, int row, int col)
// {
//     if (!root)
//         return;
//     // vertical==row and level ===col
//     mp[row][col].insert(root->val);
//     help(root->left, mp, row - 1, col + 1);
//     help(root->right, mp, row + 1, col + 1);
// }

// vector<vector<int>> verticalTraversal(TreeNode *root)
// {
//     map<int, map<int, multiset<int>>> mp;
//     vector<vector<int>> ans;
//     help(root, mp, 0, 0);
//     for (auto it : mp)
//     {
//         vector<int> col;
//         for (auto bt : it.second)
//         {
//             col.insert(col.end(), bt.second.begin(), bt.second.end());
//         }
//         ans.push_back(col);
//     }
//     return ans;
// }

// Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

//        1
//     /     \
//    2       3
//   /  \    /   \
// 4    5  6   7

// Top view will be: 4 2 1 3 7
// Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the left ones only(i.e. leftmost).
// For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

// vector<int> topView(Node *root)
// {
// if(!root)return{};
//     // (node, dis)
//     queue<pair<Node *, int>> q;
//     vector<int> ans;
//     // (dis,val)
//     map<int, int> mp;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto temp = q.front();
//             q.pop();
//             if (mp.find(temp.second) == mp.end())
//             {
//                 // first time janeman:
//                 mp[temp.second] = temp.first->data;
//             }
//             if (temp.first->left)
//             {
//                 q.push({temp.first->left, temp.second - 1});
//             }
//             if (temp.first->right)
//             {
//                 q.push({temp.first->right, temp.second + 1});
//             }
//         }
//     }
//     for (auto it : mp)
//     {
//         ans.push_back(it.second);
//     }
//     return ans;
// }

// recursive version:
// void help(Node *root, map<int, pair<int, int>> &mp, int dis, int level)
// {
//     if (!root)
//         return;
//     if (mp.find(dis) == mp.end() || mp[dis].first > level)
//     {
//         mp[dis] = {level, root->data};
//     }
//     help(root->left, mp, dis - 1, level + 1);
//     help(root->right, mp, dis + 1, level + 1);
// }

// vector<int> topView(Node *root)
// {
//     map<int, pair<int, int>> mp;
//     //  dis,(lvl ,val)
//     help(root, mp, 0, 0);
//     vector<int> ans;
//     for (auto it : mp)
//     {
//         ans.push_back(it.second.second);
//     }
//     return ans;
// }

// Bottom View of Binary Tree

// vector<int> bottomView(Node *root)
// {
//     if (!root)
//         return {};
//     vector<int> ans;
//     // (node,dis)
//     queue<pair<Node *, int>> q;
//     // (dis,val)
//     map<int, int> mp;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto temp = q.front();
//             q.pop();
//             Node *nod = temp.first;
//             int dis = temp.second;
//             mp[dis] = nod->data;
//             if (nod->left)
//             {
//                 q.push({nod->left, dis - 1});
//             }
//             if (nod->right)
//             {
//                 q.push({nod->right, dis + 1});
//             }
//         }
//     }
//     for (auto it : mp)
//     {
//         ans.push_back(it.second);
//     }
//     return ans;
// }

// recursive:

// void help(Node *root, map<int, pair<int, int>> &mp, int dis, int level)
// {
//     if (!root)
//         return;
//     if (mp.find(dis) == mp.end() || mp[dis].first <= level)
//     {
//         mp[dis] = {level, root->data};
//     }
//     help(root->left, mp, dis - 1, level + 1);
//     help(root->right, mp, dis + 1, level + 1);
// }

// vector<int> bottomView(Node *root)
// {
//     if (!root)
//         return {};
//     vector<int> ans;
//     map<int, pair<int, int>> mp;
//     // (dis,(lvl,val))
//     help(root, mp, 0, 0);
//     for (auto it : mp)
//     {
//         ans.push_back(it.second.second);
//     }
//     return ans;
// }

// 199. Binary Tree Right Side View

// vector<int> rightSideView(TreeNode *root)
// {
//     if (!root)
//         return {};
//     // (node,level)
//     vector<int> ans;
//     queue<pair<TreeNode *, int>> q;
//     map<int, int> mp;
//     // (level,val)
//     q.push({root,
//             0});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto temp = q.front();
//             q.pop();
//             TreeNode *nn = temp.first;
//             int lev = temp.second;
//             mp[lev] = nn->val;
//             if (nn->left)
//             {
//                 q.push({nn->left,  lev+1  });
//             }
//             if (nn->right)
//             {
//                 q.push({nn->right, lev+1 });
//             }
//         }
//     }
//     for (auto it : mp)
//     {
//         ans.push_back(it.second);
//     }
//     return ans;
// }

// recursive version:

// void help(TreeNode *root, int level, vector<int> &ans)
// {
//     // root right left
//     if (!root)
//         return;
//     if (ans.size() == level)
//     {
//         ans.push_back(root->val);
//     }
//     help(root->right, level + 1, ans);
//     help(root->left, level + 1, ans);
// }

// vector<int> rightSideView(TreeNode *root)
// {
//     if (!root)
//         return {};
//     vector<int> ans;
//     help(root, 0, ans);
//     return ans;
// }

// left side view :

// void help(TreeNode *root, int level, vector<int> &ans)
// {
//     // root left right
//     if (!root)
//         return;
//     if (ans.size() == level)
//     {
//         ans.push_back(root->val);
//     }
//     help(root->left, level + 1, ans);
//     help(root->right, level + 1, ans);
// }

// vector<int> rightSideView(TreeNode *root)
// {
//     vector<int>ans;
//     help(root, 0, ans);
//     return ans;
// }

// 101. Symmetric Tree:Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

// bool help(TreeNode *l, TreeNode *r)
// {
//     if (l == NULL || r == NULL)
//     {
//         return l == r;
//     }

//     return (l->val == r->val) && help(l->left, r->right) && help(l->right, r->left);
// }

// bool isSymmetric(TreeNode *root)
// {
//     if (!root)
//         return true;
//     return help(root->left, root->right);
// }

// iterative version:

// bool isSymmetric(TreeNode *root)
// {
//     queue<TreeNode *> q;
//     if (root == NULL)
//         return true;
//     q.push(root->left);
//     q.push(root->right);
//     while (!q.empty())
//     {
//         TreeNode *a = q.front();
//         q.pop();
//         TreeNode *b = q.front();
//         q.pop();
//         if (a == NULL && b == NULL)
//         {
//             continue;
//         }
//         if (!a || !b || (a->val != b->val))
//         {
//             return false;
//         }
//         q.push(a->left);
//         q.push(b->right);
//         q.push(a->right);
//         q.push(b->left);
//     }
//     return true;
// }

// 257. Binary Tree Paths:Given the root of a binary tree, return all root-to-leaf paths in any order.

// void help(TreeNode *root, string ans, vector<string> &rans)
// {
//     if (!root)
//         return;
//     if (root->left == NULL && root->right == NULL)
//     {
//         string t;
//         if (ans.size() == 0)
//             t = to_string(root->val);
//         else
//             t = ("->" + to_string(root->val));
//         ans += t;
//         rans.push_back(ans);
//     }
//     string t;
//     if (ans.size() == 0)
//         t = to_string(root->val);
//     else
//         t = ("->" + to_string(root->val));
//     help(root->left, ans + t, rans);
//     help(root->right, ans + t, rans);
//     return;
// }
// vector<string> binaryTreePaths(TreeNode *root)
// {
//     vector<string> ans;
//     help(root, "", ans);
//     return ans;
// }

// Print Root to Node Path in a Binary Tree
// Problem Statement: Print Root to Node Path In A Binary Tree. Write a program to print path from root to a given node in a binary tree.No two nodes in the tree have the same data value.

// struct node
// {
//     int data;
//     struct node *left, *right;
// };

// bool help(TreeNode *root, vector<int> &ans, int x)
// {
//     if (!root)
//         return false;
//     ans.push_back(root->val);
//     if (root->val == x)
//     {
//         return true;
//     }
//     if (help(root->left, ans, x) || help(root->right, ans, x))
//     {
//         return true;
//     }
//     ans.pop_back();
//     return false;
// }

// vector<int> getPath(TreeNode *A, int B)
// {
//     vector<int> ans;
//     help(A, ans, B);
//     return ans;
// }

// 236. Lowest Common Ancestor of a Binary Tree Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

// ganda sa brute mere taraf se :))

// bool help(TreeNode *root, vector<pair<int, TreeNode *>> &ans, int x)
// {
//     if (!root)
//         return false;
//     ans.push_back({root->val,
//                    root});
//     if (root->val == x)
//     {
//         return true;
//     }
//     if (help(root->left, ans, x) || help(root->right, ans, x))
//     {
//         return true;
//     }
//     ans.pop_back();
//     return false;
// }

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     TreeNode *a;
//     TreeNode *b;
//     vector<pair<int, TreeNode *>> pq;
//     vector<pair<int, TreeNode *>> pp;
//     help(root, pp, p->val);
//     TreeNode *ans;
//     help(root, pq, q->val);
//     for (auto it : pp)
//     {
//         for (auto bt : pq)
//         {
//             if (it == bt)
//             {
//                 ans = it.second;
//             }
//         }
//     }
//     return ans;
// }

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     if (root == NULL || p == root || q == root)
//     {
//         return root;
//     }
//     TreeNode *left = lowestCommonAncestor(root->left, p, q);
//     TreeNode *right = lowestCommonAncestor(root->right, p, q);
//     if (left == NULL)
//     {
//         return right;
//     }
//     else if (right == NULL)
//     {
//         return left;
//     }
//     else
//     {
//         return root;
//     }
// }

// 662. Maximum Width of Binary Tree:Given the root of a binary tree, return the maximum width of the given tree.The maximum width of a tree is the maximum width among all levels. The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

// int widthOfBinaryTree(TreeNode *root)
// {
//     if (!root)
//         return 0;
//     // (node,index)
//     queue<pair<TreeNode *, long long>> q;
//     q.push({root, 0});
//     int ans = 1;
//     while (!q.empty())
//     {
//         int sz = q.size();
//         int min = q.front().second;
//         int lefm, rm;
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             if (i == 0)
//                 lefm = it.second - min;
//             if (i == sz - 1)
//                 rm = it.second - min;
//             q.pop();
//             TreeNode *nn = it.first;
//             if (nn->left)
//             {
//                 q.push({nn->left,
//                         ((it.second - min) * 1LL * 2 + 1)});
//             }
//             if (nn->right)
//             {
//                 q.push({nn->right,
//                         (((it.second - min) * 1LL * 2) + 2)});
//             }
//         }
//         ans = max(ans, rm - lefm + 1);
//     }
//     return ans;
// }

// Check for Children Sum Property in a Binary Tree:  Write a program that converts any binary tree to one that follows the children sum property.The children sum property is defined as, For every node of the tree, the value of a node is equal to the sum of values of its children(left child and right child). Children Sum Parent:Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.

// bool help(Node *root)
// {
//     if (!root || (!root->left) && (!root->right))
//     {
//         return true;
//     }
//     int l = 0, r = 0;
//     if (root->left)
//         l = root->left->data;
//     if (root->right)
//         r = root->right->data;
//     if (l + r == root->data)
//     {
//         return help(root->left) && help(root->right);
//     }
//     else
//     {
//         return false;
//     }
// }

// int isSumProperty(Node *root)
// {
//     return help(root);
// }

// strivers question:
struct node
{
    int data;
    struct node *left, *right;
};

// void help(node *root)
// {
//     if (!root || (root->left == NULL && root->right == NULL))
//     {
//         return;
//     }
//     int left = 0;
//     int right = 0;
//     if (root->left)
//     {
//         left = root->left->data;
//     }
//     if (root->right)
//     {
//         right = root->right->data;
//     }
//     if (root->data > (left + right))
//     {
//         if (root->left)
//         {
//             root->left->data = left + right;
//         }
//         else if (root->right)
//         {
//             root->right->data = left + right;
//         }
//     }
//     help(root->left);
//     help(root->right);
//     int tot = 0;
//     if (root->left)
//         tot += root->left->data;
//     if (root->right)
//         tot += root->right->data;
//     if (root->left || root->right)
//     {
//         root->data = tot;
//     }
// }

// void changeTree(node *root)
// {
//     help(root);
//     return;
// }

// other approach:

// https://www.codingninjas.com/studio/library/convert-an-arbitrary-binary-tree-to-one-that-holds-the-children-sum-property-in-its-nodes

// void help(node *root)
// {
//     if (!root || (root->left == NULL && root->right == NULL))
//     {
//         return;
//     }
//     else
//     {
//         int left = 0, right = 0;
//         help(root->left);
//         help(root->right);
//         if (root->left)
//         {
//             left = root->left->data;
//         }
//         if (root->right)
//         {
//             right = root->right->data;
//         }
//         if (root->data > left + right)
//         {
//             increment(root, root->data - (left + right));
//         }
//         if (root->data < left + right)
//         {
//             root->data = left + right;
//         }
//     }
// }

// void increment(node *root, int diff)
// {
//     if (root->left)
//     {
//         root->left->data += diff;
//         increment(root->left, diff);
//     }
//     else if (root->right)
//     {
//         root->right->data += diff;
//         increment(root->right, diff);
//     }
// }
// void change(node *root)
// {
//     help(root);
// }

// 863. All Nodes Distance K in Binary Tree:Given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.You can return the answer in any order.

// // (son,parent)
// unordered_map<TreeNode *, TreeNode *> mp;
// // so that we dont traverse the parent once again :
// set<TreeNode *> visited;
// vector<int> ans;
// void sonParentMapping(TreeNode *root)
// {
//     if (root->left)
//     {
//         mp[root->left] = root;
//         sonParentMapping(root->left);
//     }
//     if (root->right)
//     {
//         mp[root->right] = root;
//         sonParentMapping(root->right);
//     }
// }

// void dfs(TreeNode *root, int k)
// {
//     if (!root || visited.find(root)!=visited.end())
//     {
//         return;
//     }
//     visited.insert(root);
//     if (k == 0)
//     {
//         ans.push_back(root->val);
//         return;
//     }
//     dfs(root->left, k - 1);
//     dfs(root->right, k - 1);
//     if (mp[root])
//     {
//         dfs(mp[root], k - 1);
//     }
// }

// vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
// {
//     sonParentMapping(root);
//     dfs(target,k);
//     return ans;
// }

// other way:

// class Solution {
// private:
//     unordered_map<int, int> map;
//     int find(TreeNode* root, TreeNode* target) {
//         if (root == nullptr) return -1;
//         if (root == target) {
//             map[root->val] = 0;
//             return 0;
//         }
//         int left = find(root->left, target);
//         if (left >= 0) {
//             map[root->val] = left + 1;
//             return left + 1;
//         }
//         int right = find(root->right, target);
//         if (right >= 0) {
//             map[root->val] = right + 1;
//             return right + 1;
//         }
//         return -1;
//     }
//     void dfs(TreeNode* root, TreeNode* target, int K, int length, vector<int>& res) {
//         if (root == nullptr) return;
//         if (map.find(root->val) != map.end()) length = map[root->val];
//         if (length == K) res.push_back(root->val);
//         dfs(root->left, target, K, length + 1, res);
//         dfs(root->right, target, K, length + 1, res);
//     }
// public:
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
//         vector<int> res;
//         find(root, target);
//         dfs(root, target, K, map[target->val], res);
//         return res;
//     }
// };

// bfs :

// vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
// {
//     unordered_map<TreeNode *, TreeNode *> mp;
//     // (son,parent)
//     queue<TreeNode *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             if (it->left)
//             {
//                 q.push(it->left);
//                 mp[it->left] = it;
//             }
//             if (it->right)
//             {
//                 q.push(it->right);
//                 mp[it->right] = it;
//             }
//         }
//     }
//     // go in up and down till k and at that time whatever left in q is elements of k level and they are required ans go in up through mp
//     int lvlsz = 0;
//     unordered_map<TreeNode *, bool> vis;
//     q.push(target);
//     vis[target] = true;
//     while (!q.empty())
//     {
//         if (lvlsz == k)
//         {
//             break;
//         }
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             if (it->left && !vis[it->left])
//             {
//                 q.push(it->left);
//                 vis[it->left] = true;
//             }
//             if (it->right && !vis[it->right])
//             {
//                 q.push(it->right);
//                 vis[it->right] = true;
//             }
//             // going up:
//             if (mp[it] && !vis[mp[it]])
//             {
//                 q.push(mp[it]);
//                 vis[mp[it]] = true;
//             }
//         }
//         lvlsz++;
//     }
//     vector<int> res;
//     while (!q.empty())
//     {
//         res.push_back(q.front()->val);
//         q.pop();
//     }
//     return res;
// }

// 2385. Amount of Time for Binary Tree to Be Infected
// You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.
// Each minute, a node becomes infected if:
// The node is currently uninfected.
// The node is adjacent to an infected node.
// Return the number of minutes needed for the entire tree to be infected.

// int amountOfTime(TreeNode *root, int start)
// {
//     // (son,parent)
//     unordered_map<TreeNode *, TreeNode *> mp;
//     mp[root] = NULL;
//     // (node,val)
//     queue<pair<TreeNode *, int>> q;
//     TreeNode *target;
//     q.push({root, root->val});
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             if (it.first->val == start)
//             {
//                 target = it.first;
//             }
//             if (it.first->left)
//             {
//                 mp[it.first->left] = it.first;
//                 q.push({it.first->left, it.first->left->val});
//             }
//             if (it.first->right)
//             {
//                 mp[it.first->right] = it.first;
//                 q.push({it.first->right, it.first->right->val});
//             }
//         }
//     }
//     // now q indicates (node,time)
//     q.push({target, 0});
//     int ans = 0;
//     unordered_map<TreeNode *, bool> visi;
//     visi[target] = true;
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             ans = max(ans, it.second);
//             TreeNode *nn = it.first;
//             if (nn->left && !visi[nn->left])
//             {
//                 q.push({nn->left, it.second + 1});
//                 visi[nn->left] = true;
//             }
//             if (nn->right && !visi[nn->right])
//             {
//                 q.push({nn->right, it.second + 1});
//                 visi[nn->right] = true;
//             }
//             if (mp[nn] && !visi[mp[nn]])
//             {
//                 q.push({mp[nn], it.second + 1});
//                 visi[mp[nn]] = true;
//             }
//         }
//     }
//     return ans;
// }

// 222. Count Complete Tree Nodes:Given the root of a complete binary tree, return the number of the nodes in the tree.According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

// tc sqr(lgn)
// sc lgn

// int helpL(TreeNode *root)
// {
//     int h = 0;
//     while (root)
//     {
//         h++;
//         root = root->left;
//     }
//     return h;
// }
// int helpR(TreeNode *root)
// {
//     int h = 0;
//     while (root)
//     {
//         h++;
//         root = root->right;
//     }
//     return h;
// }
// int countNodes(TreeNode *root)
// {
//     int lh = helpL(root);
//     int rH = helpR(root);
//     if (lh == rH)
//     {
//         return (1 << lh) - 1;
//     }
//     int lNodes = countNodes(root->left);
//     int rNodes = countNodes(root->right);
//     return 1 + lNodes + rNodes;
// }

// 105. Construct Binary Tree from Preorder and Inorder Traversal:Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

// recursive version:

// TreeNode *help(vector<int> &preorder, vector<int> &inorder, int &rootidx, int left, int right)
// {
//     if (left > right)
//     {
//         return NULL;
//     }
//     int pivot = left;
//     while (preorder[rootidx] != inorder[pivot])
//     {
//         pivot++;
//     }
//     TreeNode *root = new TreeNode(preorder[rootidx]);
//     rootidx++;
//     root->left = help(preorder, inorder, rootidx, left, pivot - 1);
//     root->right = help(preorder, inorder, rootidx, pivot + 1, right);
//     return root;
// }

// TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
// {
//     int rid=0;
//     return help(preorder,inorder,rid,0,inorder.size()-1);
// }

// using map to search pivot in constant :

// TreeNode *helper(vector<int> &preorder, vector<int> &inorder, int preS, int preE, int inS, int inE, unordered_map<int, int> &mp)
// {
//     if ((preS > preE) || (inS > inE))
//     {
//         return NULL;
//     }
//     TreeNode *root = new TreeNode(preorder[preS]);
//     root->val = preorder[preS];
//     int eleInL = mp[root->val] - inS;
//     // leftsub tree:
//     root->left = helper(preorder, inorder, preS + 1, preS + eleInL, inS, mp[root->val] - 1, mp);
//     root->right = helper(preorder, inorder, preS + 1 + eleInL, preE, mp[root->val] + 1, inE, mp);
//     return root;
// }

// TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
// {
//     // (node->val,index)
//     unordered_map<int, int> mp;
//     int i = 0;
//     for (auto it : inorder)
//     {
//         mp[it] = i;
//         i++;
//     }
//     return helper(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1, mp);
// }

// Construct Binary Tree from Inorder and Postorder Traversal:

// TreeNode *helper(vector<int> &postorder, vector<int> &inorder, int postS, int postE, int inS, int inE, unordered_map<int, int> &mp)
// {
//     if ((postS > postE) || (inS > inE))
//     {
//         return NULL;
//     }
//     TreeNode *root = new TreeNode(postorder[postE]);
//     int elem = mp[root->val];
//     int eleInL = elem - inS;
//     root->left = helper(postorder, inorder, postS, postS + eleInL - 1, inS, elem - 1, mp);
//     root->right = helper(postorder, inorder, postS + eleInL, postE-1, elem + 1, inE, mp);
//     return root;
// }

// TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
// {
//     int postS = 0, postE = postorder.size() - 1;
//     int inS = 0, inE = inorder.size() - 1;
//     unordered_map<int, int> mp;
//     int i = 0;
//     for (auto it : inorder)
//     {
//         mp[it] = i;
//         i++;
//     }
//     return helper(postorder, inorder, postS, postE, inS, inE, mp);
// }

// other way:

// TreeNode *help(vector<int> &inorder, vector<int> &postorder, int s, int e, int &postIdx)
// {
//     if (s > e)
//     {
//         return nullptr;
//     }
//     TreeNode *root = new TreeNode(postorder[postIdx--]);
//     int inidx = find(begin(inorder), end(inorder), root->val) - begin(inorder);
//     root->right = help(inorder, postorder, inidx + 1, e, postIdx);
//     root->left = help(inorder, postorder, s, inidx - 1, postIdx);
//     return root;
// }

// TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
// {
//     int posidx = postorder.size() - 1;
//     return help(inorder, postorder, 0, inorder.size() - 1, posidx);
// }

// 297. Serialize and Deserialize Binary Tree:Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.
// Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.
// Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

// class Codec
// {
// public:
//     // Encodes a tree to a single string.
//     string serialize(TreeNode *root)
//     {
//         string enc = "";
//         queue<TreeNode *> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             int sz = q.size();
//             for (int i = 0; i < sz; i++)
//             {
//                 auto it = q.front();
//                 q.pop();
//                 if (it)
//                     enc += (to_string(it->val) + ",");
//                 else
//                     enc += "1001,";
//                 if (it)
//                 {
//                     q.push(it->left);
//                     q.push(it->right);
//                 }
//             }
//         }
//         return enc;
//     }
//     // Decodes your encoded data to tree.
//     TreeNode *deserialize(string data)
//     {
//         if (data.size() == 0)
//             return nullptr;
//         int i = 0;
//         vector<int> roots;
//         for (int i = 0; i < data.size(); i++)
//         {
//             string num = "";
//             while (data[i] != ',')
//             {
//                 num += data[i];
//                 i++;
//             }
//             stringstream ss;
//             int numm;
//             ss << num;
//             ss >> numm;
//             roots.push_back(numm);
//         }
//         if (roots[0] == 1001)
//             return nullptr;
//         queue<TreeNode *> q;
//         TreeNode *root = new TreeNode(roots[0]);
//         q.push(root);
//         int kk = 1;
//         while (!q.empty() && kk < roots.size())
//         {
//             int sz = q.size();
//             for (int i = 0; i < sz; i++)
//             {
//                 auto it = q.front();
//                 q.pop();
//                 if (roots[kk] != 1001)
//                 {
//                     it->left = new TreeNode(roots[kk]);
//                     q.push(it->left);
//                     kk++;
//                 }
//                 else
//                 {
//                     it->left = NULL;
//                     kk++;
//                 }
//                 if (roots[kk] != 1001)
//                 {
//                     it->right = new TreeNode(roots[kk]);
//                     q.push(it->right);
//                     kk++;
//                 }
//                 else
//                 {
//                     it->right = NULL;
//                     kk++;
//                 }
//             }
//         }
//         return root;
//     }
// };







int main()
{

    return 0;
}