#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    long X, cnt, t;
    cin >> X;
    t = 100;
    cnt = 0;
    while(t < X){
        t = t * 1.01;
        cnt++;
    }

    cout << cnt << endl;
}