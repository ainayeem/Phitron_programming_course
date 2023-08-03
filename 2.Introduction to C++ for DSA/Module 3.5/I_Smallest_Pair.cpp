#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        int minSum = INT_MAX;

        for (int i = 0; i < N; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                int sum = arr[i] + arr[j] + (j - i);
                minSum = min(minSum, sum);
            }
        }

        cout << minSum << endl;
    }

    return 0;
}
