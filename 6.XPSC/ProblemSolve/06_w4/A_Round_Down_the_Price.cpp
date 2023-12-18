#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        long long int digit = n.size();
        long long int val = stoi(n);
        long long int ans = val - pow(10, digit - 1);
        cout << ans << endl;
    }

    return 0;
}