#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main(){
    int j = 0;
    string s;
    cin >> s;
    reverse(all(s));
    string div[4] = {"dream", "dreamer", "erase", "eraser"};
    rep(i, 4){
        reverse(all(div[i]));
    }
    bool fl = true;
    while(j < s.size()){
        bool flag = false;
        rep(i, 4){
            string d = div[i];
            if(s.substr(i, d.size()) == d){
                flag = true;
                i += d.size();
            }
        }

        if(!flag){
            fl = false;
            break;
        }
    }
    if(fl){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}