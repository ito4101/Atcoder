#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    for(int i = B*100; i < (B+1)*100; i++){
        if(i == A*125){
            cout << i/10 << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
}