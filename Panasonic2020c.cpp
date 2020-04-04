#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll A, B, C ;
    cin >> A >> B >> C;
    if(0 > C - A - B){
        cout << "No" << endl;
    } else {
        if(4*A*B > (C-A-B)*(C-A-B)){
            cout << "No" << endl;
        } else {
        cout << "Yes" << endl;
        }
    }
}