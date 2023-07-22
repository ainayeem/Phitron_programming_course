#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        set<int> s;
        stack<int> st;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            st.push(*it);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        cout << endl;
    }

    return 0;
}