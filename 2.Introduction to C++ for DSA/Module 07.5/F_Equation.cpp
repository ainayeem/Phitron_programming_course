#include <bits/stdc++.h>
using namespace std;

long long int fun(int num, int powr)
{
    long long int res = 1;
    for (int i = 0; i < powr; i++)
    {
        res = num * res;
    }
    return res;
}

int main()
{
    int num, powr;
    long long int value = 0;
    cin >> num >> powr;
    for (int i = 2; i <= powr; i += 2)
    {
        value += fun(num * 1.0, i * 1.0);
    }
    cout << value;

    return 0;
}