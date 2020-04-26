#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll cnt_digit(ll n){
    ll cnt = 1;
    while(n / 10 > 0){
        n = n/10;
        cnt++;
    }

    return cnt;
}

int main(){
    ll N, A, B, maxi, ans;
    cin >> N;
    ans = cnt_digit(N);
    for(A = 1; A*A <= N; A++){
        if(N%A != 0){
            continue;
        }

        B = N / A;
        maxi = max(cnt_digit(A), cnt_digit(B));
        ans = ans > maxi? maxi : ans;
    }

    cout << ans << endl;

}