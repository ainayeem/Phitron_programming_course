#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};

    cout << "Permutations of array a: " << endl;

    do
    {
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}
