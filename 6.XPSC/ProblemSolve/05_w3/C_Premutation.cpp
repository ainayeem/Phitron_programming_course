#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> sequences(n, vector<int>(n - 1));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
            {
                cin >> sequences[i][j];
            }
        }
        vector<int> ans;
        int first = sequences[0][0];
        for (int i = 1; i < n; i++)
        {
            if (first == sequences[i][0])
            {
                ans.push_back(first);
                break;
            }
        }
        if (ans.size() == 0)
        {
            ans.push_back(sequences[1][0]);
            for (int i = 0; i < n; i++)
            {
                if (sequences[i][0] == first)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        ans.push_back(sequences[i][j]);
                    }
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (sequences[i][0] != first)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        ans.push_back(sequences[i][j]);
                    }
                    break;
                }
            }
        }
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}