// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, limit;
//     cin >> n >> limit;

//     int count = 0;

//     for (int i = 0; i <= min(n, limit); i++)
//     {
//         int left = n - i;
//         if (left <= limit)
//         {
//             count += left + 1;
//         }
//         else if (left <= 2 * limit)
//         {
//             count += limit - (left - limit) + 1;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }
#include <iostream>
#include <queue>
using namespace std;

// Define the binary tree node structure
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to find the sum of maximum and minimum levels
int sumMaxMinLevels(TreeNode *root)
{
    if (!root)
        return 0;

    queue<TreeNode *> q;
    q.push(root);
    int maxLevelSum = INT_MIN;
    int minLevelSum = INT_MAX;
    int level = 0;

    while (!q.empty())
    {
        int size = q.size();
        int levelSum = 0;

        for (int i = 0; i < size; ++i)
        {
            TreeNode *curr = q.front();
            q.pop();
            levelSum += curr->val;

            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }

        maxLevelSum = max(maxLevelSum, levelSum);
        minLevelSum = min(minLevelSum, levelSum);
        ++level;
    }

    return maxLevelSum + minLevelSum;
}

// Example usage
int main()
{
    // Construct a sample binary tree
    TreeNode *root = new TreeNode(30);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(8);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(7);

    // Calculate the sum of maximum and minimum levels
    int result = sumMaxMinLevels(root);
    cout << "Sum of maximum and minimum levels: " << result << endl;

    // Clean up memory (not shown in this example)

    return 0;
}
