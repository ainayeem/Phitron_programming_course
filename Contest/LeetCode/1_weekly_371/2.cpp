#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<string>> access_times(r, vector<string>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> access_times[i][j];
        }
    }

    unordered_map<string, vector<int>> empAcc;
    for (auto it : access_times)
    {
        string empName = it[0];
        int acsTime = stoi(it[1]);
        empAcc[empName].push_back(acsTime);
    }
    vector<string> res;
    for (auto it : empAcc)
    {
        vector<int> accTime = it.second;
        sort(accTime.begin(), accTime.end());

        int count = 1;
        for (int i = 1; i < accTime.size(); i++)
        {
            if (accTime[i] - accTime[i - 1] <= 100)
            {
                count++;
                if (count >= 3)
                {
                    res.push_back(it.first);
                    break;
                }
            }
            else
            {
                count = 1;
            }
        }
    }
    for (string emp : res)
    {
        cout << emp << " ";
    }
    cout << endl;

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}