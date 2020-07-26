#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, K, M, cnt, t;
    cin >> N >> K;
    int treat[N];
    rep(i , N){
        treat[i] = 0;
    }
    cnt = 0;
    rep(i, K){
        cin >> M;
        rep(i, M){
            cin >> t;
            treat[t-1]++;
        }
    }

    rep(i, N){
        if(treat[i] == 0){
            cnt++;
        }
    }

    cout << cnt << endl;

}