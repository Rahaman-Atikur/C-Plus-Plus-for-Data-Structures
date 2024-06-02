#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long  int x, y;
    cin >> x >> y;
  long long   int summation;
  long long   int multiplication;
  long long   int substraction;
   
    summation = x + y;
    substraction = x - y;
    multiplication = x * y;
    cout << x << " "<< "+" <<" " << y << " " << "=" <<" "<< summation<<endl;
    cout << x << " "<< "*" <<" " << y << " " << "=" <<" "<< multiplication<<endl;
    cout << x << " "<< "-" <<" " << y << " " << "=" <<" "<< substraction<<endl;
}