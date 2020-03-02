#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, T, N, temp, min, index;
    cin >> N >> T >> A;
    vector<int> box(N);
    min = 1000000;
    index = 0;
    for(int i = 0; i < N; i++){
        cin >> temp;
        box.at(i) = T*1000 - temp*6;
        if(min > abs(box.at(i) - A*1000)){
            min = abs(A*1000 - box.at(i));
            index = i+1;
        }
    }

    cout << index <<endl;
}