#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int summation, multiplication, substraction;
    summation = x + y;
    substraction = x - y;
    multiplication = x * y;
    cout << x << " "<< "+" <<" " << y << " " << "=" <<" "<< summation<<endl;
    cout << x << " "<< "*" <<" " << y << " " << "=" <<" "<< multiplication<<endl;
    cout << x << " "<< "-" <<" " << y << " " << "=" <<" "<< substraction<<endl;
}