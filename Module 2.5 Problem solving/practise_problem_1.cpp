#include <bits/stdc++.h>
using namespace std;
int *get_array(int N)
{
    int *a = new int[N]; // Dynamic Array which others index addres
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int N;
    cin >> N;
    int *a = get_array(N);
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}