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
        int kn = n;
        string s = "";
        for (int i = 9; i >= 1; i--)
        {
            if (n >= i)
            {
                n = n - i;
                s += to_string(i);
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}