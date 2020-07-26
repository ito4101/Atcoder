#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int x;
    rep(i, 5){
        cin >> x;
        if(x == 0){
            cout << i+1 << endl;
            break;
        }
    }
}