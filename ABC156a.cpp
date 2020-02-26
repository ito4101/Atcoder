#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r, sum;
    cin >> n >> r;
    if (n < 10){
        sum = 100*(10-n) + r;
    } else {
        sum = r;
    }
    cout << sum << endl;
}