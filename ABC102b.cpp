#include<bits/stdc++.h>
using namespace std;

int main(){
    int min, max, N, temp;
    min = 1000000000;
    max = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(min > temp){
            min = temp;
        }
        if(max < temp){
            max = temp;
        }
    }

    cout << max-min << endl;
}