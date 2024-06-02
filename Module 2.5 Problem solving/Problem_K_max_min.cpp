#include <bits/stdc++.h>
using namespace std;
int main()
{

    
    int a[3];
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        mx = max(a[i], mx);
        mn = min(a[i], mn);
    }
    cout << mn <<" " << mx ;
}