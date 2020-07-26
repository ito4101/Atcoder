#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N;
    string s;
    cin >> N >> s;
    if(s.size() <= N){
        cout << s << endl;
    } else {
        rep(i, N){
            cout << s[i];
        }
        cout << "...";
        cout << endl;
    }
}