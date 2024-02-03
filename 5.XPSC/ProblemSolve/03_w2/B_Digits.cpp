#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;

int main()
{
    int n, b;
    cin >> n >> b;

    vector<int> a(N);
    int i;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % b;
        n = n / b;
    }
    int count = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        // cout << a[j];
        count++;
    }
    cout << count << endl;

    return 0;
}