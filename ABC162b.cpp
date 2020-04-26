#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N;
    ll sum;
    cin >> N;
    sum = 0;
    for(int i = 1; i <= N; i++){
        if(i % 3 == 0 || i % 5 == 0){
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
}