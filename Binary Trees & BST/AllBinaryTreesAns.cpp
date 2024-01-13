#include <bits/stdc++.h>
using namespace std;

// Given an array ’arr’that contains 7 integers representing the values of nodes in binary tree. This represents level order. The ?rst element of the array represents the value of the root node. Your objective is to construct a binary tree using the remaining 6 elements of the array, creating nodes for each of these values and return root node.

// class Node
// {
// public:
//     int val;
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
//         if(!root)
//         return;
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
//         stringstream ss(data);
//         string str;
//         getline(ss, str, ',');
//         queue<TreeNode *> q;
//         TreeNode *root = new TreeNode(stoi(str));
//         q.push(root);
//         while (!q.empty())
//         {
//             int sz = q.size();
//             for (int i = 0; i < sz; i++)
//             {
//                 auto it = q.front();
//                 q.pop();
//                 getline(ss, str, ',');
//                 if (str != "1001")
//                 {
//                     it->left = new TreeNode(stoi(str));
//                     q.push(it->left);
//                 }
//                 else
//                 {
//                     it->left = NULL;
//                 }
//                 getline(ss, str, ',');
//                 if (str != "1001")
//                 {
//                     it->right = new TreeNode(stoi(str));
//                     q.push(it->right);
//                 }
//                 else
//                 {
//                     it->right = NULL;
//                 }
//             }
//         }
//         return root;
//     }
// };

// class Codec
// {
// public:
//     // Encodes a tree to a single string.
//     string serialize(TreeNode *root)
//     {
//         if (!root)
//             return "#";
//         return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
//     }
//     TreeNode *myde(stringstream &s)
//     {
//         string str;
//         getline(s, str, ',');
//         if (str == "#")
//             return nullptr;
//         TreeNode *root = new TreeNode(stoi(str));
//         root->left = myde(s);
//         root->right = myde(s);
//         return root;
//     }

//     // Decodes your encoded data to tree.
//     TreeNode *deserialize(string data)
//     {
//         if (data[0] == '#')
//             return nullptr;
//         stringstream s(data);
//         return myde(s);
//     }
// };

// morrison inorder:

// lc answer:
// vector<int> inorderTraversal(TreeNode *root)
// {
//     vector<int> inor;
//     TreeNode *cur = root;
//     TreeNode *pre;
//     while (cur != NULL)
//     {
//         if (cur->left == NULL)
//         {
//             inor.push_back(cur->val);
//             cur = cur->right;
//         }
//         else
//         {
//             pre = cur->left;
//             while (pre->right != NULL)
//             {
//                 pre = pre->right;
//             }
//             pre->right = cur;
//             TreeNode *temp = cur;
//             cur = cur->left;
//             temp->left = NULL;
//         }
//     }
//     return inor;
// }

// strivers way:
// vector<int> inorderTraversal(TreeNode *root)
// {
//     TreeNode *cur = root;
//     vector<int> ans;
//     while ( cur!=NULL)
//     {
//         if (!cur->left)
//         {
//             ans.push_back(cur->val);
//             cur = cur->right;
//         }
//         else
//         {
//             TreeNode *pre = cur->left;
//             while (pre->right != NULL && pre->right != cur)
//             {
//                 pre = pre->right;
//             }
//             if (pre->right == NULL)
//             {
//                 pre->right = cur;
//                 cur = cur->left;
//             }
//             else
//             {
//                 pre->right = NULL;
//                 ans.push_back(cur->val);
// pribt root and go to right
//                 cur = cur->right;
//             }
//         }
//     }
//     return ans;
// }

// morrison preorder:

// vector<int> preorderTraversal(TreeNode *root)
// {
//     TreeNode *cur = root;
//     vector<int> ans;
//     while (cur != NULL)
//     {
//         if (cur->left == NULL)
//         {
//             ans.push_back(cur->val);
//             cur = cur->right;
//         }
//         else
//         {
//             TreeNode *pre = cur->left;
//             while (pre->right != NULL && pre->right != cur)
//             {
//                 pre = pre->right;
//             }
//             if (pre->right == NULL)
//             {
//                 pre->right = cur;
//                 ans.push_back(cur->val);
//                 cur = cur->left;
//             }
//             else
//             {
//                 pre->right = NULL;
//                 cur = cur->right;
//             }
//         }
//     }
//     return ans;
// }

// 114. Flatten Binary Tree to Linked List:Given the root of a binary tree, flatten the tree into a "linked list":The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.The "linked list" should be in the same order as a pre-order traversal of the binary tree.

// TreeNode *pre;
// void flatten(TreeNode *root)
// {
//     if (!root)
//     {
//         return;
//     }
//     flatten(root->right);
//     flatten(root->left);
//     root->right = pre;
//     root->left = nullptr;
//     pre = root;
// }

// void flatten(TreeNode *root)
// {
//     if (!root)
//         return;
//     TreeNode *cur = root;
//     while (cur != nullptr)
//     {
//         if (cur->left)
//         {
//             TreeNode *pred = cur->left;
//             while (pred->right != NULL)
//             {
//                 pred = pred->right;
//             }
//             pred->right = cur->right;
//             cur->right = cur->left;
//             cur->left = NULL;
//         }
//         else
//         {
//             cur = cur->right;
//         }
//     }
//     return;
// }

// void flatten(TreeNode *root)
// {
//     stack<TreeNode *> s;
//     s.push(root);
//     while (!s.empty())
//     {
//         TreeNode *temp = s.top();
//         s.pop();
//         if (temp->right)
//         {
//             s.push(temp->right);
//         }
//         if (temp->left)
//         {
//             s.push(temp->left);
//         }
//         if (s.size())
//             temp->right = s.top();
//         temp->left = nullptr;
//     }
//     return ;
// }

// ------------------------------------------BST------------------------------------------

// int findCeil(Node *root, int input)
// {
//     if (root == NULL)
//         return -1;
//     int ans = -1;
//     while (root != NULL)
//     {
//         if (root->data == input)
//         {
//             return input;
//         }
//         else if (root->data > input)
//         {
//             ans = root->data;
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return ans;
// }

// recursive:i found exhausting to grasp

// int findCeil(Node *root, int input)
// {
//     if (!root)
//         return -1;
//     if (root->data == input)
//     {
//         return input;
//     }
//     if (root->data < input)
//         return findCeil(root->right, input);
//     else
//     {
//      (   root->data >input)
//         int lceil = findCeil(root->left, input);
//         if (input <= lceil)
//             return lceil;
//         else
//             return root->data;
//     }
// }

// Floor in BST:

// int floor(Node *root, int x)
// {
//     int ans = -1;
//     while (root)
//     {
//         if (root->data == x)
//         {
//             return x;
//         }
//         else if (root->data > x)
//         {
//             root = root->left;
//         }
//         else
//         {
//             // root->data<x so psble ans so move more closer move more right
//             ans = root->data;
//             root = root->right;
//         }
//     }
//     return ans;
// }

// recursive:

// int floor(Node *root, int x)
// {
//     if (!root)
//         return -1;
//     if (root->data == x)
//         return x;
//     if (root->data > x)
//     {
//         return floor(root->left, x);
//     }
//     else
//     {
//         // (root->data  <x) psble ans
//         int rfloor = floor(root->right, x);
//         if (rfloor >= root->data)
//         {
//             return rfloor;
//         }
//         else
//         {
//             return root->data;
//         }
//     }
// }

// 701. Insert into a Binary Search Tree:You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

// TreeNode *insertIntoBST(TreeNode *root, int val)
// {
//     if (!root)
//     {
//         return new TreeNode(val);
//     }
//     TreeNode *pre;
//     TreeNode *cur = root;
//     pre = cur;
//     while (cur)
//     {
//         pre = cur;
//         if (cur->val < val)
//         {
//             cur = cur->right;
//         }
//         else
//         {
//             cur = cur->left;
//         }
//     }
//     TreeNode *newNode = new TreeNode(val);
//     if (pre->val > val)
//     {
//         //    left insert
//         pre->left = newNode;
//         return root;
//     }
//     pre->right = newNode;
//     return root;
// }

// recursive :

// TreeNode *insertIntoBST(TreeNode *root, int val)
// {
//     if (!root)
//     {
//         return new TreeNode(val);
//     }
//     if (root->val < val)
//     {
//         root->right = insertIntoBST(root->right, val);
//     }
//     else
//     {
//         root->left = insertIntoBST(root->left, val);
//     }
//     return root;
// }

// 450. Delete Node in a BST:https://leetcode.com/problems/delete-node-in-a-bst/discuss/1591176/C%2B%2B-Simple-Solution-w-Images-and-Detailed-Explanation-or-Iterative-and-Recursive-Approach

// merged cases :

// TreeNode *deleteNode(TreeNode *root, int key)
// {
//     TreeNode *iter = root, *par = NULL;
//     while (iter && iter->val != key)
//     {
//         par = iter;
//         if (iter->val > key)
//         {
//             iter = iter->left;
//         }
//         else
//         {
//             iter = iter->right;
//         }
//     }
//     if (!iter)
//         return root;
//     if (!iter->left or !iter->right)
//     {
//         auto child = (iter->left) ? iter->left : iter->right;
//         if (!par)
//             root = child;
//         else if (par->left == iter)
//             par->left = child;
//         else
//             par->right = child;
//     }
//     else
//     {
//         auto cur = iter;
//         par = iter;
//         iter = iter->right;
//         while (iter->left)
//         {
//             par = iter;
//             iter = iter->left;
//         }
//         cur->val = iter->val;
//         if (par->left == iter)
//         {
//             par->left = iter->right;
//         }
//         else
//         {
//             par->right = iter->right;
//         }
//     }
//     delete iter;
//     return root;
// }

// // individual cases:

// TreeNode *deleteNode(TreeNode *root, int key)
// {
//     TreeNode *iter = root, *par = NULL;
//     while (iter && iter->val != key)
//     {
//         par = iter;
//         if (iter->val > key)
//         {
//             iter = iter->left;
//         }
//         else
//         {
//             iter = iter->right;
//         }
//     }
//     if (!iter)
//         return root;
//     // leaf node:
//     if (!iter->left && !iter->right)
//     {
//         if (!par)
//         {
//             root = NULL;
//         }
//         else if (par->left == iter)
//         {
//             par->left = NULL;
//         }
//         else
//         {
//             par->right = NULL;
//         }
//     }
//     else if (!iter->left && iter->right)
//     {
//         // left child not present :
//         if (!par)
//         {
//             root = iter->right;
//         }
//         // (par->left == iter) for understanding this i have kept photo to understand
//         else if (par->left == iter)
//             par->left = iter->right;
//         else
//             par->right = iter->right;
//     }
//     else if (iter->left && !iter->right)
//     {
//         if (!par)
//         {
//             root = iter->left;
//         }
//         else if (par->left == iter)
//             par->left = iter->left;
//         else
//             par->right = iter->left;
//     }
//     else
//     {
//         // both child present :
//         auto cur = iter;
//         par = iter;
//         iter = iter->right;
//         while (iter->left)
//         {
//             par = iter;
//             iter = iter->left;
//         }
//         // so that at last we could delete the iter pointer
//         cur->val = iter->val;
//         if (par->left == iter)
//         {
//             par->left = iter->right;
//         }
//         else
//         {
//             par->right = iter->right;
//         }
//     }
//     delete iter;
//     return root;
// }

// TreeNode *deleteNode(TreeNode *root, int key)
// {
//     if (!root)
//         return nullptr;
//     if (root->val > key)
//     {
//         root->left = deleteNode(root->left, key);
//     }
//     else if (root->val < key)
//     {
//         root->right = deleteNode(root->right, key);
//     }
//     else
//     {
//         if (!root->left || !root->right)
//         {
//             root = root->left ? root->left : root->right;
//         }
//         else
//         {
//             auto cur = root, par = root;
//             root = root->right;
//             while (root->left)
//             {
//                 par = root;
//                 root = root->left;
//             }
//             cur->val = root->val;
//             if (par->left == root)
//             {
//                 par->left = root->right;
//             }
//             else
//             {
//                 par->right = root->right;
//             }
//             root = cur;
//         }
//     }
//     return root;
// }

// TreeNode *deleteNode(TreeNode *root, int key)
// {
//     if (!root)
//         return NULL;
//     if (root->val > key)
//     {
//         root->left = deleteNode(root->left, key);
//     }
//     else if (root->val < key)
//     {
//         root->right = deleteNode(root->right, key);
//     }
//     else
//     {
//         if (!root->left && !root->right)
//             return NULL;
//         if (!root->left || !root->right)
//         {
//             return root->left ? root->left : root->right;
//         }
//         TreeNode *temp = root->right;
//         while (temp->left)
//         {
//             temp = temp->left;
//         }
//         root->val = temp->val;
//         root->right = deleteNode(root->right, temp->val);
//     }
//     return root;
// }

// 230. Kth Smallest Element in a BST:Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

// int kthSmallest(TreeNode *root, int k)
// {
//     stack<TreeNode *> s;
//     int cnt = 0;
//     while (root || !s.empty())
//     {
//         if (root)
//         {
//             s.push(root);
//             root = root->left;
//         }
//         else
//         {
//             auto temp = s.top();
//             s.pop();
//             cnt++;
//             if (cnt == k)
//             {
//                 return temp->val;
//             }
//             root = temp->right;
//         }
//     }
//     return -1;
// }

// void inorde(TreeNode *root, int &ans, int &cnt, int k)
// {
//     if (!root)
//         return;
//     inorde(root->left, ans, cnt, k);
//     if (++cnt == k)
//     {
//         ans = root->val;
//         return;
//     }
//     inorde(root->right, ans, cnt, k);
//     return;
// }

// int kthSmallest(TreeNode *root, int k)
// {
//     int ans;
//     int cnt = 0;
//     inorde(root, ans, cnt, k);
//     return ans;
// }

// 98. Validate Binary Search Tree:Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// tc:n sc:n

// void inor(TreeNode *root, vector<int> &ans)
// {
//     if (!root)
//         return;
//     inor(root->left, ans);
//     ans.push_back(root->val);
//     inor(root->right, ans);
// }

// bool isValidBST(TreeNode *root)
// {
//     if (!root)
//         return true;
//     vector<int> t;
//     inor(root, t);
//     for (int i = 0; i < t.size() - 1; i++)
//     {
//         if (t[i] >= t[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// this pattern used in kth smallest and chek bst:

// vector<int> inorder(TreeNode *root)
// {
//     if (!root)
//         return {};
//     stack<TreeNode *> s;
//     vector<int> ans;
//     while (root || !s.empty())
//     {
//         while (root)
//         {
//             s.push(root);
//             root = root->left;
//         }
//         TreeNode *temp = s.top();
//         s.pop();
//         ans.push_back(temp->val);
//         root = temp->right;
//     }
//     return ans;
// }

// bool helper(TreeNode *root, double l, double r)
// {
//     if (!root)
//     {
//         return true;
//     }
//     if (root->val < r and root->val > l)
//     {
//         return helper(root->left, l, root->val) and helper(root->right, root->val, r);
//     }
//     return false;
// }
// bool isValidBST(TreeNode *root)
// {
//     return helper(root, -10e9, 10e9);
// }

// bool isValidBST(TreeNode *root)
// {
//     stack<TreeNode *> s;
//     TreeNode *pre = nullptr;
//     while (root || !s.empty())
//     {
//         while (root)
//         {
//             s.push(root);
//             root = root->left;
//         }
//         root = s.top();
//         s.pop();
//         if (pre && pre->val >= root->val)
//         {
//             return false;
//         }
//         pre = root;
//         root = root->right;
//     }
//     return true;
// }

// 235. Lowest Common Ancestor of a Binary Search Tree:Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     if (!root || p == root || q == root)
//     {
//         return root;
//     }
//     TreeNode *left;
//     TreeNode *right;
//     if (root->val > p->val && root->val > q->val)
//     {
//         return lowestCommonAncestor(root->left, p, q);
//     }
//     else if (root->val < p->val && root->val < q->val)
//     {
//         return lowestCommonAncestor(root->right, p, q);
//     }
//     else
//     {
//         left = lowestCommonAncestor(root->left, p, q);
//         right = lowestCommonAncestor(root->right, p, q);
//     }
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

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     while ((root->val - (long)p->val) * (root->val - (long)q->val) > 0)
//     {
//         root = root->val > p->val ? root->left : root->right;
//     }
//     return root;
// }

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     if (root->val > p->val && root->val > q->val)
//     {
//         return lowestCommonAncestor(root->left, p, q);
//     }
//     else if (root->val < p->val && root->val < q->val)
//     {
//         return lowestCommonAncestor(root->right, p, q);
//     }
//     return root;
// }

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
// {
//     while (true)
//     {
//         if (root->val > p->val && root->val > q->val)
//         {
//             root = root->left;
//         }
//         else if (root->val < p->val && root->val < q->val)
//         {
//             root = root->right;
//         }
//         else
//         {
//             return root;
//         }
//     }
// }

// 1008. Construct Binary Search Tree from Preorder Traversal:

// sc: n+n
// tc:nlgn+n

// TreeNode *helper(vector<int> &preorder, vector<int> &inorder, int &rootidx, int l, int r)
// {
//     if (l > r)
//         return nullptr;
//     int pivot = l;
//     while (preorder[rootidx] != inorder[pivot])
//     {
//         pivot++;
//     }
//     TreeNode *newNode = new TreeNode(preorder[rootidx]);
//     rootidx++;
//     newNode->left = helper(preorder, inorder, rootidx, l, pivot - 1);
//     newNode->right = helper(preorder, inorder, rootidx, pivot + 1, r);
//     return newNode;
// }

// TreeNode *bstFromPreorder(vector<int> &preorder)
// {
//     int rid = 0;
//     vector<int> inorder(preorder);
//     sort(inorder.begin(), inorder.end());
//     return helper(preorder, inorder, rid, 0, inorder.size() - 1);
// }

// adv stl:

// TreeNode *bstFromPreorder(vector<int> &preorder, int f = 0, int l = 0)
// {
//     if (l == 0)
//         l = preorder.size();
//     if (f == l)
//     {
//         return nullptr;
//     }
//     auto sp = find_if(begin(preorder) + f, begin(preorder) + l, [&](int val)
//                       { return val > preorder[f]; });
//     auto root = new TreeNode(preorder[f]);
//     root->left = bstFromPreorder(preorder, f + 1, sp - begin(preorder));
//     root->right = bstFromPreorder(preorder, sp - begin(preorder), l);
//     return root;
// }

// int idx = 0;

// TreeNode *bstFromPreorder(vector<int> &preorder, int p = INT_MAX)
// {
//     if (idx >= preorder.size() || preorder[idx] > p)
//     {
//         return nullptr;
//     }
//     auto n = new TreeNode(preorder[idx++]);
//     n->left = bstFromPreorder(preorder, n->val);
//     n->right = bstFromPreorder(preorder, p);
//     return n;
// }

// iterative:

// TreeNode *bstFromPreorder(vector<int> &preorder)
// {
//     stack<TreeNode *> s;
//     TreeNode *root = new TreeNode(preorder[0]);
//     s.push(root);
//     for (int i = 1; i < preorder.size(); i++)
//     {
//         TreeNode *temp = new TreeNode(preorder[i]);
//         if (preorder[i] > s.top()->val)
//         {
//             TreeNode *p;
//             while (!s.empty() && s.top()->val < preorder[i])
//             {
//                 p = s.top();
//                 s.pop();
//             }
//             p->right = temp;
//         }
//         else
//         {
//             s.top()->left = temp;
//         }
//         s.push(temp);
//     }
//     return root;
// }

// 173. Binary Search Tree Iterator:https://www.geeksforgeeks.org/problems/predecessor-and-successor/1  Note:- In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the successor.

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};

// void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
// {
//     Node *cur = root;
//     while (cur != NULL)
//     {
//         if (cur->key < key)
//         {
//             pre = cur;
//             cur = cur->right;
//         }
//         else
//         {
//             cur = cur->left;
//         }
//     }
//     cur = root;
//     while (cur != NULL)
//     {
//         if (cur->key > key)
//         {
//             suc = cur;
//             cur = cur->left;
//         }
//         else
//         {
//             cur = cur->right;
//         }
//     }
//     return;
// }

// Merge Two BSTs:coding ninjas

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// brute force:insetead of using sort directly merge due to alas i have used sort

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
//         ans.push_back(temp->data);
//         temp = temp->right;
//     }
//     return ans;
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//     vector<int> a(inorderTraversal(root1)), b(inorderTraversal(root2));
//     a.insert(a.end(), b.begin(), b.end());
//     sort(a.begin(), a.end());
//     return a;
// }

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// void ltree(Node *root, stack<Node *> &s)
// {
//     while (root)
//     {
//         s.push(root);
//         root = root->left;
//     }
//     return;
// }

// vector<int> merge(Node *root1, Node *root2)
// {
//     vector<int> ans;
//     stack<Node *> s1, s2;
//     ltree(root1, s1);
//     ltree(root2, s2);
//     while (!s1.empty() && !s2.empty())
//     {
//         if (s1.top()->data < s2.top()->data)
//         {
//             ans.push_back(s1.top()->data);
//             auto t = s1.top();
//             s1.pop();
//             ltree(t->right, s1);
//         }
//         else if (s1.top()->data > s2.top()->data)
//         {
//             ans.push_back(s2.top()->data);
//             auto t = s2.top();
//             s2.pop();
//             ltree(t->right, s2);
//         }
//         else
//         {
//             auto t1 = s1.top();
//             auto t2 = s2.top();
//             ans.push_back(s2.top()->data);
//             ans.push_back(s2.top()->data);
//             s1.pop();
//             s2.pop();
//             ltree(t1->right, s1);
//             ltree(t2->right, s2);
//         }
//     }
//     while (!s1.empty())
//     {
//         ans.push_back(s1.top()->data);
//         auto t = s1.top()->right;
//         s1.pop();
//         ltree(t, s1);
//     }
//     while (!s2.empty())
//     {
//         auto t = s2.top()->right;
//         ans.push_back(s2.top()->data);
//         s2.pop();
//         ltree(t, s2);
//     }
//     return ans;
// }

// if we need to return the root node of the merged list then :

// for that first solving few more questions :

//  Normal BST To Balanced BST:
//  go to other file :)

// continue:

// Node *convertToDll(Node *root, Node *&head)
// {
//     if (!root)
//         return nullptr;
//     convertToDll(root->right, head);
//     root->right = head;
//     if (head!=NULL)
//         head->left = root;
//     head = root;
//     convertToDll(root->left, head);
// }

// Node *mergeDLL(Node *root1, Node *root2)
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (root1 && root2)
//     {
//         if (root1->data < root2->data)
//         {
//             if (root1 == NULL)
//             {
//                 head = root1;
//                 tail = root1;
//                 root1 = root1->right;
//             }
//             else
//             {
//                 tail->right = root1;
//                 root1->left = tail;
//                 tail = root1;
//                 root1 = root1->right;
//             }
//         }
//         if (root1->data > root2->data)
//         {
//             if (root2 == NULL)
//             {
//                 head = root2;
//                 tail = root2;
//                 root2 = root2->right;
//             }
//             else
//             {
//                 tail->right = root2;
//                 root2->left = tail;
//                 tail = root2;
//                 root2 = root2->right;
//             }
//         }
//     }
//     while (root1)
//     {
//         tail->right = root1;
//         root1->left = tail;
//         tail = root1;
//         root1 = root1->right;
//     }
//     while (root2)
//     {
//         tail->right = root2;
//         root2->left = tail;
//         tail = root2;
//         root2 = root2->right;
//     }
//     return head;
// }

// // dll to bst:

// int countNodes(Node *root)
// {
//     int cnt = 0;
//     while (root)
//     {
//         root = root->right;
//         cnt++;
//     }
//     return cnt;
// }

// Node *dllToBST(Node *&head, int n)
// {
//     if (head == NULL || n <= 0)
//         return nullptr;
//     Node *left = dllToBST(head, n / 2);
//     Node *root = head;
//     root->left = left;
//     head = head->right;
//     root->right = dllToBST(head, n - (n / 2) - 1);
//     return root;
// }
/*
      from main we have to call it like this :
    {
      Node *head1, head2;
      convertToDll(root1, head1);
      convertToDll(root2, head2);
      head1->left=NULL;
      head2->left=NULL;
      Node *head=   mergeDLL(head1,head2);
      int n=countNodes(head);
      return  dllToBST(head,n);
    }
  */

// Implement the BSTIterator class that represents an iterator over the in-order traversal of a binary search tree (BST):BSTIterator(TreeNode root) Initializes an object of the BSTIterator class. The root of the BST is given as part of the constructor. The pointer should be initialized to a non-existent number smaller than any element in the BST.boolean hasNext() Returns true if there exists a number in the traversal to the right of the pointer, otherwise returns false.int next() Moves the pointer to the right, then returns the number at the pointer.

// class BSTIterator
// {
// public:
//     stack<TreeNode *> s;
//     void pushall(TreeNode *root)
//     {
//         while (root)
//         {
//             s.push(root);
//             root = root->left;
//         }
//     }
//     BSTIterator(TreeNode *root)
//     {
//         pushall(root);
//     }
//     int next()
//     {
//         auto top = s.top();
//         s.pop();
//         pushall(top->right);
//         return top->data;
//     }
//     bool hasNext()
//     {
//         return !s.empty();
//     }
// };

// 653. Two Sum IV - Input is a BST:Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise

// void inorder(TreeNode *root, vector<int> &ans)
// {
//     if (!root)
//         return;
//     inorder(root->left, ans);
//     ans.push_back(root->data);
//     inorder(root->right, ans);
// }

// bool findTarget(TreeNode *root, int k)
// {
//     vector<int> in;
//     int l = 0;
//     inorder(root, in);
//     int r = in.size() - 1;
//     while (l < r)
//     {
//         if (in[l] + in[r] == k)
//         {
//             return true;
//         }
//         else if (in[l] + in[r] < k)
//         {
//             l++;
//         }
//         else
//         {
//             r--;
//         }
//     }
//     return false;
// }

// other way:

// class BSTIterator
// {
// public:
//     stack<TreeNode *> s;
//     bool reverse;
//     BSTIterator(TreeNode *root, bool rev)
//     {
//         reverse = rev;
//         pushAll(root);
//     }
//     void pushAll(TreeNode *root)
//     {
//         while (root)
//         {
//             s.push(root);
//             root = (!reverse) ? root->left : root->right;
//         }
//     }
//     int next()
//     {
//         auto top = s.top();
//         s.pop();
//         pushAll((!reverse) ? top->right : top->left);
//         return top->data;
//     }
// };
// class Solution
// {
// public:
//     bool findTarget(TreeNode *root, int k)
//     {
//         BSTIterator left(root, false), right(root, true);
//         int i = left.next(), j = right.next();
//         while (i < j)
//         {
//             if (i + j == k)
//             {
//                 return true;
//             }
//             else if (i + j > k)
//             {
//                 j = right.next();
//             }
//             else
//             {
//                 i = left.next();
//             }
//         }
//         return false;
//     }
// };

// O(n) time O(lg n) space

// class BSTIterator
// {
//     stack<TreeNode *> s;
//     TreeNode *node;
//     bool forward;
// public:
//     BSTIterator(TreeNode *root, bool f)
//     {
//         node = root;
//         forward = f;
//     }
//     int next()
//     {
//         while (node || !s.empty())
//         {
//             if (node)
//             {
//                 s.push(node);
//                 node = (forward) ? node->left : node->right;
//             }
//             else
//             {
//                 node = s.top();
//                 s.pop();
//                 int val = node->data;
//                 node = (forward) ? node->right : node->left;
//                 return val;
//             }
//         }
//         return -1;
//     }
// };

// class Solution
// {
// public:
//     bool findTarget(TreeNode *root, int k)
//     {
//         BSTIterator left(root, true), right(root, false);
//         int i = left.next(), j = right.next();
//         while (i < j)
//         {
//             if (i + j == k)
//             {
//                 return true;
//             }
//             else if (i + j > k)
//             {
//                 j = right.next();
//             }
//             else
//             {
//                 i = left.next();
//             }
//         }
//         return false;
//     }
// };

// using hash_set:
// unordered_set<int> s;
// bool findTarget(TreeNode *root, int k)
// {
//     if (!root)
//         return false;
//     if (s.find(k - root->data) != s.end())
//     {
//         return true;
//     }
//     s.insert(root->data);
//     return findTarget(root->left, k) || findTarget(root->right, k);
// }

// 99. Recover Binary Search Tree:You are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

// void helper(TreeNode *root, TreeNode *&prev, TreeNode *&first, TreeNode *&mid, TreeNode *&last)
// {
//     if (!root)
//         return;
//     helper(root->left, prev, first, mid, last);
//     if (prev && (prev->val > root->val))
//     {
//         if (!first)
//         {
//             first = prev;
//             mid = root;
//         }
//         else
//         {
//             last = root;
//         }
//     }
//     prev = root;
//     helper(root->right, prev, first, mid, last);
// }

// void recoverTree(TreeNode *root)
// {
//     TreeNode *prev=NULL, *first=NULL, *mid=NULL, *last=NULL;
//     helper(root, prev, first, mid, last);
//     if (first && last)
//     {
//         swap(first->val, last->val);
//     }
//     else
//     {
//         swap(first->val, mid->val);
//     }
//     return;
// }

// void helper(TreeNode *root, TreeNode *&first, TreeNode *&last, TreeNode *&prev)
// {
//     if (!root)
//         return;
//     helper(root->left, first, last, prev);
//     if (first == NULL && prev->val > root->val)
//     {
//         first = prev;
//     }
//     if (first && prev->val > root->val)
//     {
//         last = root;
//     }
//     prev = root;
//     helper(root->right, first, last, prev);
// }

// void recoverTree(TreeNode *root)
// {
//     TreeNode *prev = new TreeNode(INT_MIN);
//     TreeNode *first = NULL, *last = NULL;
//     helper(root, first, last, prev);
//     swap(first->val, last->val);
//     return;
// }

// morrison travrsal :https://leetcode.com/problems/recover-binary-search-tree/discuss/32559/Detail-Explain-about-How-Morris-Traversal-Finds-two-Incorrect-Pointer

// void recoverTree(TreeNode *root)
// {
//     if (!root)
//         return;
//     TreeNode *pre = NULL, *first = NULL, *second = NULL, *temp = NULL;
//     while (root != NULL)
//     {
//         if (root->left != NULL)
//         {
//             temp = root->left;
//             while (temp->right && temp->right != root)
//             {
//                 temp = temp->right;
//             }
//             if (temp->right != nullptr)
//             {
//                 // print
//                 if (pre != NULL && pre->val > root->val)
//                 {
//                     if (first == NULL)
//                     {
//                         first = pre;
//                         second = root;
//                     }
//                     else
//                     {
//                         second = root;
//                     }
//                 }
//                 pre = root;
//                 temp->right = nullptr;
//                 root = root->right;
//             }
//             else
//             {
//                 temp->right = root;
//                 root = root->left;
//             }
//         }
//         else
//         {
//             // print
//             if (pre != NULL && pre->val > root->val)
//             {
//                 if (first == NULL)
//                 {
//                     first = pre;
//                     second = root;
//                 }
//                 else
//                 {
//                     second = root;
//                 }
//             }
//             pre = root;
//             root = root->right;
//         }
//     }
//     if (first && second)
//     {
//         swap(first->val, second->val);
//     }
//     return;
// }

// Largest BST:Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.
// Note : Here Size is equal to the number of nodes in the subtree.

class NodeValue
{
public:
    int mini, maxi, maxSize;
    NodeValue(int mini, int maxi, int maxSize)
    {
        this->mini = mini;
        this->maxi = maxi;
        this->maxSize = maxSize;
    }
};

NodeValue helper(Node *root)
{
    if (!root)
    {
        return NodeValue(INT_MAX, INT_MIN, 0);
    }
    auto left = helper(root->left);
    auto right = helper(root->right);

    if (root->data > left.maxi && root->data < right.mini)
    {
        return NodeValue(min(left.mini, root->data), max(root->data, right.maxi), 1 + left.maxSize + right.maxSize);
    }
    return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
}

int largestBst(Node *root)
{
    return helper(root).maxSize;
}

int main()
{
 
    return 0;
}