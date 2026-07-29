// Find hcf of 2 numbers -- revisit again after some time.


#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << hcf(n, m);
}