#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string str;
    string a, b, c, d;
    cin >> str;
    a = str.at(2);
    b = str.at(3);
    c = str.at(4);
    d = str.at(5);

    if(a == b && c == d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}