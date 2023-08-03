#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // string s;
    char freq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        freq[s - 'a']++;
    }

    // for (char i = 0; i <= 26; i++)
    // {
    //     for (int j = 0; j < freq[i]; j++)
    //     {
    //         cout << char(i + 'a');
    //     }
    // }
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] != 0)
        {
            // printf("%c", i + 97);
            // cnt[i]--;
            cout << char(i + 97);
            freq[i]--;
        }
    }

    return 0;
}