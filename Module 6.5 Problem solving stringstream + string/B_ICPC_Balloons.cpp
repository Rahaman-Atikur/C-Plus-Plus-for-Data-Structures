#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0;
        int frq[26] = {0};

        for (char c : s) {
            int idx = c - 'A';

            if (frq[idx] == 0) {
                cnt += 2; 
            } else {
                cnt += 1; 
            }

            frq[idx]++;
        }

        cout << cnt << endl;
    }

    return 0;
}

