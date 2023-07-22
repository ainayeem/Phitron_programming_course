#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool firstWord = true;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (firstWord)
        {
            cout << word;
            firstWord = false;
        }
        else
        {
            cout << " " << word;
        }
    }

    return 0;
}