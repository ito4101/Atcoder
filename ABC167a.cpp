#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    string s, t;
    cin >> s >> t;
    rep(i, s.size()){
        if(s[i] != t[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}