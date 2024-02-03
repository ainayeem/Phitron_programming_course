#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    while (s.size() != 1)
    {
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
            // cout << sum << endl;
        }
        s = to_string(sum);
        // cout << s << endl;

        count++;
    }
    cout << count << endl;

    return 0;
}