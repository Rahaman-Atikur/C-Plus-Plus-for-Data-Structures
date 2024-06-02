#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    // int a,b,c,d;
    // cin>> a >> b >> c >> d;
    // int mn = min({a,b,c,d});
    // int mx = max({a,b,c,d});
    // cout<< mn << " " << mx << endl;

    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<< a << " "<< b <<endl;

    return 0;
}