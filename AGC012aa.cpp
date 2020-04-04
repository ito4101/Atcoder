#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    ll vol;
    cin >> N;
    vector<int> box(3*N);
    for(int i = 0; i < N*3; i++){
        cin >> box.at(i);
    }

    sort(box.begin(), box.end(), greater<int>());
    vol = 0;

    for(int i = 1; i < 2*N; i += 2){
        vol += box.at(i);
    }

    cout << vol << endl;
}