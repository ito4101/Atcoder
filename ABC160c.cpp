#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, K, min, max, che;
    cin >> K >> N;
    vector<int> dis(N);
    for(int i = 0; i < N; i++){
        cin >> dis.at(i);
    }
    max = 0;

    for(int i = 0; i < N-1; i++){
        che = dis.at(i+1) - dis.at(i);

        if(che > max){
            max = che;
        }
    }
    che = dis.at(0) - dis.at(N-1) + K;

    if(che > max){
        max = che;
    }

    min = K - max;

    cout << min << endl;
}