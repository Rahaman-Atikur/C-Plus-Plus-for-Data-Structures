#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s1;
    cin >> s1;
    int count = 0;
    string word;

    stringstream ss(s);
    for(char c:s)
    {
    while (ss >> word)
    {
        if (word == s1)
        {
            count++;
        }
    }
    }

    cout<<count<<endl;
    return 0;
}