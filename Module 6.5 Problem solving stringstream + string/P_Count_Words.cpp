#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    bool inside_word = false;
    int cnt = 0;
    for (char c : st)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
                cnt++;
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << cnt << endl;
    return 0;
}