#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

// void in(TreeNode<int> *root, vector<int> &ans)
// {
//     if (!root)
//         return;
//     in(root->left, ans);
//     ans.push_back(root->data);
//     in(root->right, ans);
// }

// TreeNode<int> *help(vector<int> in, int l, int h)
// {
//     if (l > h)
//         return NULL;
//     int mid = l + (h - l) / 2;
//     TreeNode<int> *root = new TreeNode<int>(in[mid]);
//     root->left = help(in, l, mid - 1);
//     root->right = help(in, mid + 1, h);
//     return root;
// }

// TreeNode<int> *balancedBst(TreeNode<int> *root)
// {
//     vector<int> a;
//     in(root, a);
//     return help(a, 0, a.size() - 1);
// }


int main()
{

    return 0;
}
