#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);

        map<string, int> mp;
        int count = 0;
        string maxName;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                maxName = word;
            }
        }
        cout << maxName << " " << count;
        cout << endl;
    }

    return 0;
}