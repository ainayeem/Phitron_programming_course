#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    switch (v%2)
    {
    case 0:
        cout<<"Even"<<endl;
        break;

    
    default:
        cout<<"Odd"<<endl;
        break;
    }
}