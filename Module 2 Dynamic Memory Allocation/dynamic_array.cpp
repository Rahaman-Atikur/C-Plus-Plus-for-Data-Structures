              // Creating Dynamic Array
              // new int array_name[]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int * a = new int [n];      // Dynamic array declaration
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}