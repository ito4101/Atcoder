#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int a, b;
    cin >> s;
    bool flag1, flag2;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == 'A'){
            a = i;
            flag1 = true;
            break;
        }
    }
    for(int i = s.size()-1; i >= 0; i--){
        if(s.at(i) == 'Z'){
            b = i;
            flag2 = true;
            break;
        }
    }
    if(flag1 && flag2){
        cout << b-a+1 << endl;
    }

}