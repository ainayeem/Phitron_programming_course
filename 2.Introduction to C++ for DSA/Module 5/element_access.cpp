#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    cout << s[0] << endl;
    cout << s.at(0) << endl; // same

    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl; // same

    cout << s.front() << endl;
    return 0;
}