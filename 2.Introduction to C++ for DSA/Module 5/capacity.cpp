#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello workd";
    cout << s.size() << endl;
    cout << s.max_size() << endl; // online complier->10^6
    cout << s.capacity() << endl;

    string a = "hello";
    a.clear();
    cout << a << endl;

    string b;
    if (s.empty() == true)
    {
        cout << "empty" << endl;
    }

    string c = "hello_world";
    // cin >> c; // space chara nibe

    c.resize(5);
    c.resize(8, 'x');

    return 0;
}