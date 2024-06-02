#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";
    //  string b = "World";
    //  a = a + b;
    //  cout << a << endl;
    //  cout << b << endl;
    //  // a="HelloA";
    //  a.push_back('A');
    //  a.pop_back();
    //  a=a+"A";
    //  cout << a << endl;
    //  a = "Gello";
    //  cout << a << endl;
    string a = "hello_world";
    a.erase(4);
    a.replace(4, 1, "so");
    a.insert(5,"Rahat");
    cout << a << endl;

    return 0;
}