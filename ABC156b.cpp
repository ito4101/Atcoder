#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, temp, digit;
    cin >> n >> k;
    digit = 1;
    while (1){
        if(n / k > 0){
            temp = n / k;
            n = temp;
            digit++;
        } else {
            break;
        }

    }
    cout << digit << endl;
}