#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, K, sum;
    cin >> N >> K;
    vector<int> box(N);
    for(int i = 0; i < N; i++){
        cin >> box.at(i);
    }

    sort(box.begin(), box.end(), greater<int>());
    sum = 0;
    for(int i = 0; i < K; i++){
        sum += box.at(i);
    }

    cout << sum << endl;

}