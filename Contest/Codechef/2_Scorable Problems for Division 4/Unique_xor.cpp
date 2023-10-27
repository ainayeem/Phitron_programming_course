#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minOperations(string &s, int n, int k)
{
    unordered_map<int, vector<int>> mod_indices;
    for (int i = 0; i < n; ++i)
    {
        int mod = i % k;
        mod_indices[mod].push_back(i);
    }

    int minOps = 0;
    for (auto &[mod, indices] : mod_indices)
    {
        int countZeros = 0, countOnes = 0;
        for (int index : indices)
        {
            if (s[index] == '0')
            {
                ++countZeros;
            }
            else
            {
                ++countOnes;
            }
        }
        minOps += min(countZeros, countOnes);
    }

    return minOps;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int result = minOperations(s, n, k);
        cout << result << endl;
    }

    return 0;
}
