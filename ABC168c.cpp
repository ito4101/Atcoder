#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

double calc(int A, int B, double h, double m){
    static const double pi = 3.141592653589793;
    double t, c;
    t = A*A + B*B - 2*A*B*cos(abs((h-m)/180)*pi);
    c = sqrt(t);
    return c;

}

int main(){
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double ans, h, m;
    h = 0.5 * (H*60+M);
    m = 6*M;
    ans = calc(A, B, h, m);
    cout << std::fixed << std::setprecision(15)<< ans << endl;

}