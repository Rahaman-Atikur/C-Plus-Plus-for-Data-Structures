#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s, x;
    cin >> s >> x;
    int a = x.size();
    
    
    int cnt = 0;
    while (s.find(x) != -1)
    {
        s.replace(s.find(x),a,"#" );
        cnt++;
    }
    cout<<s<<endl;
    }

    return 0;
}