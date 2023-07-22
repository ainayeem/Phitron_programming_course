#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int firstsum = 0;
        int lastsum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            // cout << s[i] << " ";

            if (i < 3)
            {
                firstsum = firstsum + s[i];
            }
            else
            {
                lastsum = lastsum + s[i];
            }
        }
        // cout << firstsum << endl;
        // cout << lastsum << endl;
        if (firstsum == lastsum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}