#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string crnt)
{
    string copy = crnt;
    reverse(copy.begin(), copy.end());
    return crnt == copy;
}

string addMnt(string crnt, int interval)
{
    int h = stoi(crnt.substr(0, 2));
    int m = stoi(crnt.substr(3, 2));
    m += interval;
    h += m / 60;
    m %= 60;

    h %= 24;

    string strH = to_string(h);
    string strM = to_string(m);

    if (strH.length() == 1)
    {
        strH = "0" + strH;
    }
    if (strM.length() == 1)
    {
        strM = "0" + strM;
    }

    return strH + ":" + strM;
}

int solve(string time, int interval)
{
    set<string> palindromCount;
    string crnt = time;
    for (int i = 0; i <= 1440; i++)
    {
        if (isPalindrome(crnt))
        {
            palindromCount.insert(crnt);
        }
        crnt = addMnt(crnt, interval);
    }
    return palindromCount.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time;
        int interval;
        cin >> time >> interval;
        cout << solve(time, interval) << endl;
    }

    return 0;
}