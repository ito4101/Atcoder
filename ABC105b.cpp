#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    if(N > 3){
        for(int i = 0; i * 4 <= N; i++){
            M = i * 4;
            for(int j = 0; M + j * 7 <= N; j++){
                if (M+j*7 == N){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }

    }
    cout << "No" << endl;
}