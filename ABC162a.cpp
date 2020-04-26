#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N;
    cin >> N;
    while(N > 0){
        if(N %10 == 7){
            cout << "Yes" << endl;
            return 0;
        }
        N = N/10;
    }

    cout << "No" << endl;
}