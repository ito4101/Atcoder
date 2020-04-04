#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool flag(int n){
    int a[5], i;
    bool Flag;
    Flag = false;
    i = 0;
    while(n > 0){
        a[i] = n%10;
        n /= 10;
        i++;
    }
    if(a[0] == a[4] && a[1] == a[3]){
        Flag = true;
    }

    return Flag;
}

int main(){
    int A, B, cnt;
    bool Flag;
    cnt = 0;
    cin >> A >> B;
    for(int i = A; i <= B; i++){
        Flag = flag(i);
        if(Flag){
            cnt++;
        }
    }

    cout << cnt << endl;
}