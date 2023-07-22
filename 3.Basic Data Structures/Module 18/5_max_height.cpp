#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        //  1.ber kore ana
        Node *p = q.front();
        q.pop();

        // 2.ja kaj ase kora
        int l, r;
        cin >> l >> r;
        Node *newleft;
        Node *newright;
        if (l == -1)
            newleft = NULL;
        else
            newleft = new Node(l);
        if (r == -1)
            newright = NULL;
        else
            newright = new Node(r);
        p->left = newleft;
        p->right = newright;

        // 3.child push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = inputTree();
    cout << maxHeight(root) << endl;

    return 0;
}