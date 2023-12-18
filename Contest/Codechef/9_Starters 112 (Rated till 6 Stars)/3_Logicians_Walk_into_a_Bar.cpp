#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' || flag == 0)
            {
                cout << "NO" << endl;
                flag = 0;
            }
            else
            {

                if (i == n - 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "IDK" << endl;
                }
            }
        }
    }

    return 0;
}