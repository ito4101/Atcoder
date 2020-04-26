#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    ll N, cntR, cntB, cntG, cnt;
    ll sum;
    cin >> N;
    string box;
    cin >> box;
    cntR = 0;
    cntB = 0;
    cntG = 0;
    cnt = 0;
    for(ll i = 0; i < N; i++){
        if(box.at(i) == 'R'){
            cntR++;
        }
        if(box.at(i) == 'G'){
            cntG++;
        }
        if(box.at(i) == 'B'){
            cntB++;
        }
    } 
    for(ll i = 0; i < N-2; i++){
        for(ll j = 1; i + 2*j < N; j++){
            if(box.at(i) != box.at(i + j) && box.at(i) != box.at(i + 2 * j) && box.at(i + 2*j) != box.at(i + j)){
                cnt++;
            }
        }

    } 

    sum = cntR * cntB * cntG - cnt;
    cout << sum << endl;
}