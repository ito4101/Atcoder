#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int X, Y, min, ans, j;
    cin >> X >> Y;
    vector<int> box(1000,10000);
    rep(i, Y){
        cin >> box.at(i);
    }
    sort(box.begin(), box.begin()+Y);
    min = 10000;
    j = 0;
    for(int i = -1*X; i <= 2*X; i++){
        if(box.at(j) == i){
            j++;
            continue;
        }

        if(min > abs(X-i)){
            min = abs(X-i);
            ans = i;
        }
    }

    cout << ans << endl;
}