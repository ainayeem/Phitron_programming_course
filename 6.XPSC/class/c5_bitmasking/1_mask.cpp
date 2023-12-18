#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x; // kon bit caccchi
    cin >> x;
    int mask = 1 << x;
    if ((n & mask) == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}

// for value extract = mask diye and(show kore)
// for value change = mask diye xor(0 k 1,1 k 0)
// for clear set bit = (1 k 0)