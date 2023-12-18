#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, d1, d2;
    cin >> r1 >> r2;
    cin >> d1 >> d2;
    int a = d1 + r1;
    int b = d2 + r2;
    // cout << a << " " << b << endl;
    if (a > b)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }

    return 0;
}