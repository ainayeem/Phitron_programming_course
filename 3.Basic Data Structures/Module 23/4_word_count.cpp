#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // cout << mp["cricket"] << endl;

    return 0;
}