#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, temp, f, s;
    cin >> N;
    vector<int> box(N, 0);
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> temp;
        cin >> f;
        if(temp == 1){
            if(f == 0 && N != 1){
                cout << "-1" << endl;
                return 0;
            }
        }

        if(box.at(temp-1) != 0){
            if(box.at(temp-1) != f){
            cout << "-1" << endl;
            return 0;
            }
        } else {
            box.at(temp - 1) = f;
        }
    }
    if(N > 1 && box.at(0) == 0){
        box.at(0) = 1;
    }
    for(int i = 0; i < N; i++){
        s += box.at(i)*pow(10, N-i-1);
    }
        cout << s << endl;
}