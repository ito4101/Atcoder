#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, M, K, S;
    cin >> N >> M;
    vector<int> cnt(N);

    for(int i = 0; i < M; i++){
        cin >> S >> K;
        cnt.at(S-1)++;
        cnt.at(K-1)++;
    }

    for(int i  = 0; i < N; i++){
        cout << cnt.at(i) << endl;
    }
}