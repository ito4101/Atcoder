#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int S, W;
    cin >> S >> W;
    if(S > W){
        cout << "safe" << endl;
    } else {
        cout << "unsafe" << endl;
    }
}