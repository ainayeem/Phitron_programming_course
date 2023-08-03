#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int val;
        cin >> val;
        v.push_back(val);
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);
    }
    int query;
    cin >> query;
    while (query--)
    {
        int q;
        cin >> q;
        if (q == 0)
        {

            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }

        else if (q == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (q == 2)
        {

            if (!pq.empty())
            {

                pq.pop();
                if (!pq.empty())
                {

                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
            break;
    }

    return 0;
}