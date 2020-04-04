#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int N, K, cnt, in;
    cnt = 0;
    cin >> N >> K;
    vector<int> box(N);
    for(int i = 0; i < N; i++){
        box.at(i) = 0;
    }
    for(int i = 0; i < N; i++){
        cin >> in;
        box.at(in)++;
    }

    for(int i = K; i < N; i++){
        cout << box.at(i) << endl;
    }




}