#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        count++;
    }
    if (count == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << count << endl;
    }

    return 0;
}