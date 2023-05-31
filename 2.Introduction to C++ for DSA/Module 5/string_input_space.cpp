#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cin.ignore();
    // getchar();
    // cin.getline(s,100); //for ---- char s[100]; dea thake
    getline(cin, s); // ager input er enter nea ney use ignore() or getchar()
    cout << s << endl;
    cout << s.size() << endl;

    return 0;
}