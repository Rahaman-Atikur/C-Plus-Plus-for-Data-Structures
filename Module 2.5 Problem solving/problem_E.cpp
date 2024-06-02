#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    int mx = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        mx = max(a[i], mx);
    }
    cout << mx << " ";
}