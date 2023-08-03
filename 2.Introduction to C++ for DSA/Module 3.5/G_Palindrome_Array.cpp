#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {9, 5, 4, 3, 2, 3, 4, 5, 9};
    int p;
    cin >> p;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    // Get the length of array
    size_t len = sizeof(arr) / sizeof(arr[0]);

    // Compare the first half of array with the
    // reversed second half of array
    bool result = std::equal(arr,
                             arr + len / 2,
                             std::reverse_iterator<int *>(arr + len));

    // Check if array is Palindrome or not
    if (result)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}