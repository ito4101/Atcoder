#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    long int N, K, temp, min;
    cin >> N >> K;
    if(K == 1 || N%K == 0){
        cout << "0" << endl;
        return 0;
    }

    if(N > K){
        N = N % K;
    }
    
    temp = K - N;
    if(temp >= N){
        min = N;
    } else {
        min = temp;
    }

    cout << min << endl;

}