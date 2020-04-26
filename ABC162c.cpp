#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, g;
    ll sum;
    cin >> N;
    sum = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                g = __gcd(__gcd(i,j), __gcd(j,k));
                sum += g;
            }
        }
    }

    cout << sum << endl;
}