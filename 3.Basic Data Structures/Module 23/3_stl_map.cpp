#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    // mp.insert({"sakib", 75});
    // mp.insert({"rakib", 75});
    // mp.insert({"akib", 0});
    mp["sakib"] = 75; // O(logN)
    mp["rakib"] = 5;
    mp["akib"] = 0;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl; //O(logN)
    // }

    // cout << mp["rakib"] << endl;
    if (mp.count("akib"))
    {
        cout << "ase" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }

    return 0;
}