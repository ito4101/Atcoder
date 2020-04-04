#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, M, cnt;
    cin >> N >> M;
    cnt = 0;
    if(N >= 2 || M >= 2){
        cnt += N*(N-1)/2;
        cnt += M*(M-1)/2;
    }

    cout << cnt << endl;
}