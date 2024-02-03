#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0, x = 0, y = 0;
        cin >> a >> b >> c >> x >> y;

        int remDog = max(0, (x - a));
        int remCat = max(0, (y - b));

        if (remDog + remCat <= c)
        {
            YES
        }
        else
        {
            NO
        }
    }

    return 0;
}