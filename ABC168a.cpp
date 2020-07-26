#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
int bonbon(int N){
    int t;
    t = N %10;
    return t;
}

int main(){
    int N, s;
    cin >> N;
    s = bonbon(N);
    switch (s)
    {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        cout << "hon" << endl;
        break;
    case 0:
    case 1:
    case 6:
    case 8:
        cout << "pon" << endl;
        break;
    default:
        cout << "bon" << endl;
        break;
    }
}