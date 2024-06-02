#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt =0;
    while(s.find("EGYPT")!=-1)
    {
        s.replace(s.find("EGYPT"),5," "));
        cnt++;
    }
    cout<<s;
    return 0;
}