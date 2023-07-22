#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Ratul";
    string r;
    getline(cin, r);
    stringstream rr(r);
    string word;
    int flag = 0;
    while (rr >> word)
    {
        if (word == s)
        {

            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}