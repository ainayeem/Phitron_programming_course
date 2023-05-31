#include<iostream>
using namespace std;

int main()
{
    char s[100];

    // cin>>s; //space er por input ney na
    cin.getline(s,100); //enter chara input ney
    //fgets(s,100,stdin);
    
    cout<<s;
    return 0;
}