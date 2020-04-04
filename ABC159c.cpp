#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int L;
    double x;
    long double max;
    cin >> L;
    max = 0.0;
    x = L/3.0;
    max = x*x*x;

    cout << setprecision(15) << max << endl;
}