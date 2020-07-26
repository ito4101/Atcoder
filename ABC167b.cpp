#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int A, B, C, K, sum;
    cin >> A >> B >> C >> K;
    sum = 0;
    if(A <= K){
        sum += A;
    } else {
        sum += K;
    }
    K -= A;
    K -= B;
    if(K > 0){
        sum -= K;
    }
        cout << sum << endl;


}