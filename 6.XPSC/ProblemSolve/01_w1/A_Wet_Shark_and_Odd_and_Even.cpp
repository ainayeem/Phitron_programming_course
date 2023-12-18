#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum = 0, flag = 0, smallestOdd = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                smallestOdd = min(smallestOdd, a[i]);
            }
        }
        if (sum % 2 != 0)
        {
            sum -= smallestOdd;
            cout << sum << endl;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int a[n];

//     long long int sum = 0, smallestOdd = LLONG_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         sum += a[i];
//         if (a[i] % 2 != 0)
//         {
//             smallestOdd = min(smallestOdd, a[i]);
//         }
//     }

//     if (sum % 2 != 0)
//     {
//         sum -= smallestOdd;
//     }

//     cout << sum << endl;

//     return 0;
// }
