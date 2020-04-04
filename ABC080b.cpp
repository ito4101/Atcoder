#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int harshad(int n){
    int sum;
    sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main(){
    int n, s;
    cin >> n;
    s = harshad(n);
    if(n%s == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}