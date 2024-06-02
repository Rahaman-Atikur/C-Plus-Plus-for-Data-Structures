#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n]; // Dynamic array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i]; // copy to another array
    }
    delete[] a; // delete first array after copy
    for (int i = n; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++) // increase size
    {
        cout << b[i] << " ";
    }
    return 0;
}