#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int K, A, B;
    cin >> K >> A >> B;
    for(int i = A; i <= B; i++){
        if(i % K == 0){
            cout << "OK" << endl;
            return 0;
        }
    }

    cout << "NG" << endl;
}