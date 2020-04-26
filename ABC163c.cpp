#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define MAXV 500000

int main(){
    int N, box[MAXV], t;
    cin >> N;
    rep(i, N){
        box[i] = 0;
    }
    rep(i, N-1){
        cin >> t;
        box[t-1]++;
    }
    rep(i, N){
        cout << box[i] << endl;
    }



}