#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, K;
    cin >> N >> K;
    vector<int> box(N);
    rep(i, N){
        cin >> box.at(i);
    }
    for(int i = K ; i < N; i++){
        if(box.at(i) > box.at(i-K)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}