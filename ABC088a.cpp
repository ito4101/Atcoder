#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, f;
    cin >> n >> m;
    f = n % 500;
    if (f <= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}