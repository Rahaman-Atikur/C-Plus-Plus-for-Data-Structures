#include <bits/stdc++.h>
using namespace std;
void print(stringstrem &ss)
{
    string word;
    if (ss > word)
    {
        print(ss);
        cout << word << endl;
    }
}
int main()
{
    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    // string s = "Hello World";
    // print(s);
    // cout << s << endl;
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    return 0;
}