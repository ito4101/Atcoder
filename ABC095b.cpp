#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M, min, temp, cnt;
    cin >> N >> M;
    min = 1000;
    cnt = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(min > temp){
            min = temp;
        }
        M -= temp;
        cnt++;
    }
    while(M >= min){
        M -= min;
        cnt++;
    }

    cout << cnt << endl;
}