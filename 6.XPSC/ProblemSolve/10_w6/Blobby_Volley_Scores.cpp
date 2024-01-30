#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
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

        bool aServer = true;
        int aScr = 0, bScr = 0;
        for (char c : s)
        {
            if (c == 'A')
            {
                if (aServer)
                {
                    aScr++;
                }
                else
                {
                    aServer = true;
                }
            }
            else
            {
                if (aServer)
                {
                    aServer = false;
                }
                else
                {
                    bScr++;
                }
            }
        }
        cout << aScr << " " << bScr << endl;
    }

    return 0;
}