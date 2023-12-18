#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int fr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        fr[s[i] - 97] += 1;
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fr[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "None" << endl;
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (fr[i] == 0)
            {
                cout << (char)(i + 97) << endl;
                break;
            }
        }
    }
    return 0;
}