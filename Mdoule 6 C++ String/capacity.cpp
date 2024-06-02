#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";
    // cout << s.size() << endl;
    // //cout << s.max_size() << endl;
    // string k;
    // k="ghshhkddkhgjhgdghjg";
    // cout << k.capacity() << endl;
    // cout << k.size() << endl;
    // string s;
    // s = "Atikur";
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;

    // string s="hello";
    // s.clear();
    // if (s.empty() == true)
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }
    string s;
    cin >> s;
    s.resize(11);
    s.resize(8,'X');
    cout << s.size() << endl;
    cout << s << endl;

    return 0;
}