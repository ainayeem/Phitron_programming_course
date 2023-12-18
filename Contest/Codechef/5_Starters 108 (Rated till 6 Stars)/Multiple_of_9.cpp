#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int val = 0;
        for (auto i : s)
        {
            if (i == '?')
                cnt++;
            else
                val += (i - '0');
        }
        if (s[0] == '?')
        {
            cout << 1;
            cnt--;
            while (cnt--)
                cout << 0;
            cout << endl;
        }
        else
        {
            val = val % 9;
            if (val == 0)
            {
                cnt--;
                while (cnt--)
                    cout << 1;
                cout << 2 << endl;
            }
            else
            {
                while (cnt--)
                    cout << 1;
                cout << endl;
            }
        }
    }
    return 0;
}