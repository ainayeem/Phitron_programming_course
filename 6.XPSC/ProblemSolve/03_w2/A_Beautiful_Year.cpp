
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 1;

    while (flag)
    {
        int fr[10] = {0};
        n++;
        string s = to_string(n);
        for (int i = 0; i < 4; i++)
        {
            fr[s[i] - '0']++;
        }
        if (fr[s[0] - '0'] == 1 && fr[s[1] - '0'] == 1 && fr[s[2] - '0'] == 1 && fr[s[3] - '0'] == 1)
        {
            flag = 0;
            break;
        }
    }
    cout << n << endl;

    return 0;
}