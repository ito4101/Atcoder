#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, M;
    cin >> N >> M;
    int height[N];
    bool H[N];
    rep(i, N){
        cin >> height[i];
    }
    rep(i, N){
        H[i] = true;
    }
    int k, j;
    rep(i,M){
        cin >> k >> j;
        if(height[k-1] < height[j-1]){
            H[k-1] = false;
        } else if(height[k-1] == height[j-1]){
            H[k-1] = false;
            H[j-1] = false;
        } else {
            H[j-1] = false;
        }
    }
    int cnt = 0;
    rep(i, N){
        if(H[i] == true){
            cnt++;
        }
    }
    cout << cnt << endl;

}