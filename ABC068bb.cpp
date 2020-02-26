#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 1;
    if (N != 1) {
        while (ans * 2 <= N) {
            ans *= 2;
        }
    }
    cout << ans << endl;
}