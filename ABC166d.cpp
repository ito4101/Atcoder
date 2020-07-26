#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ill(v) v.begin(), v.end()


int main(){
    ll X, A, B, C, D;
    cin >> X;
    for(int i = -120; i <= 120; i++){
        for(int j = -120; j <= 120; j++){
            A = i*i*i*i*i - j*j*j*j*j;
            if(A == X){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}
