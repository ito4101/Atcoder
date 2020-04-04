#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, x, cnt;
    bool flag = true;
    cin >> N >> x;
    vector<int> box(N);

    for(int i = 0; i < N; i++){
        cin >> box.at(i);
    }

    sort(box.begin(), box.end());
    cnt = 0;
    for(int i = 0; i < N; i++){
        if(x <= 0 || x - box.at(i) < 0){
            cout << cnt << endl;
            return 0;
        } else {
            x -= box.at(i);
            cnt++;
        }
    }

    if(box.at(0) <= x){
        cnt--;
    }

    cout << cnt << endl;

}