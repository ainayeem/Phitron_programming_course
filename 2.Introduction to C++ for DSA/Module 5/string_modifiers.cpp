#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    string b = "world";
    // a = a + b;
    a.append(b); // same

    // cout << a << endl;
    // cout << b << endl;

    // a[5]='A'; didnot work
    a.push_back('A');
    a.pop_back();

    a.assign("gelo");

    string b = "helloWorld";
    b.erase(4);    // por theke sob delete kore dey
    b.erase(4, 1); // starting index and koyta character

    b.replace(4, 3, "so"); // erase plus replace
    b.replace(4, 0, "so"); // erase plus replace
    b.insert(5, "nayeem");

    return 0;
}