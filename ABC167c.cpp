#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<vector<int>> box(N, vector<int>(M+1));
    rep(i, N){
        rep(j, M+1){
            cin >> box.at(i).at(j);
        }
    }

    int test[M+1];
    rep(i, M+1){
        test[i] = 0;
    }

    sort(box.begin(), box.end());
    rep(i, N){
        rep(j, M+1){
            cout << box.at(i).at(j) << " ";
        }
        cout << endl;
    }
}