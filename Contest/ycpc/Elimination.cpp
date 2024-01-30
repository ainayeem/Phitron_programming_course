#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        string ss = s.substr(l - 1, r - l + 1);
        cout << ss << endl;

        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '0')
            {
                count++;
            }
            if (ss[i] == '0' && ss[i + 1] == '1')
            {
                count += 2;
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
// 011001100110