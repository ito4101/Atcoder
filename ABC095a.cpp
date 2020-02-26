#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum = 700;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            sum += 100;
        }
    }
    cout << sum <<endl;
}