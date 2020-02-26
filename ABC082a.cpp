#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, out;
    cin >> a >> b;
    if ((a + b) % 2 != 0) {
        out = (a + b + 1) / 2;
    } else {
        out = (a + b) / 2;
    }
    cout << out << endl;
}