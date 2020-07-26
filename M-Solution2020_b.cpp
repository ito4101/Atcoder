#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int r, g, b, K;
    cin >> r >> g >> b >> K;
    int i = 0;
    while(r >= g){
        i++;
        g *= 2;
    }
    K -= i;
    i = 0;
    while(g >= b){
        i++;
        b *= 2;
    }
    K -= i;

    if(K >= 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}