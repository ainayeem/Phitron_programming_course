#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = a;
    int dCount = 0;
    while (a != 0)
    {
        a = a / 10;
        dCount++;
    }
    // cout << dCount << endl;
    if (dCount == 4)
        cout << b << endl;
    else if (dCount == 3)
        cout << "0" << b << endl;
    else if (dCount == 2)
        cout << "00" << b << endl;
    else
        cout << "000" << b << endl;

    return 0;
}