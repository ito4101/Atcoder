#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, b, r, cnt, i, k;
    cin >> N >> b >> r;
    cnt = 0;
    i = 0;
    while(i < N/(r + b)){
            cnt += b;
            i++;
    }

    k = 0;
    while(k < N % (r + b)){
            for(int j = 0; j < b; j++){
                if(k < N % (r + b)){
                    cnt++;
                    k++;
                } else {
                    break;
            }
        }
            k += r;
    }

    cout << cnt << endl;
}