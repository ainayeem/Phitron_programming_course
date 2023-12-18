#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> getSubarraysWithElementKTimes(vector<int> &nums, int target, int k)
{
    int n = nums.size();
    vector<vector<int>> result;

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == target)
        {
            int count = 1;
            int j = i + 1;

            // Count occurrences of the target element in the subarray
            while (j < n && nums[j] == target)
            {
                ++count;
                ++j;
            }

            if (count >= k)
            {
                // If the count is at least k, add the subarray to the result
                result.push_back(vector<int>(nums.begin() + i, nums.begin() + j));
            }
        }
    }

    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
    }
    vector<vector<int>> result = getSubarraysWithElementKTimes(v, mx, k);
    for (const auto &subarray : result)
    {
        for (int num : subarray)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}