#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define MAXV 10001

int main(){
    int N, M, cnt, t;
    cin >> N >> M;
    cnt = 0;
    rep(i, M){
        cin >> t;
        cnt += t;
    }
    if(N - cnt < 0){
        cout << "-1" << endl;
    } else {
        cout << N-cnt << endl;
    }

}