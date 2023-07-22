#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};
int main()
{
    Student a[5];
    for (int i = 0; i < 5; i++)
    {
        getline(cin, a[i].name); // space soho input name near jonno "amin ullah"
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
// input
// amin ullah
// 12
// 54
// sakib khan
// 78
// 56
// asad jaman
// 67
// 56