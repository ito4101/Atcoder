#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string box, tes, tes2, rev1, rev2;
    bool flag;
    flag = false;
    cin >> box;
    for(int i = 0; i < box.size()/2; i++){
        tes.push_back(box.at(i));
    }
    for(int i = 0; i < box.size()/2; i++){
        tes2.push_back(box.at(i + (box.size()+1)/2));
    }

    rev1 = tes;
    rev2 = tes2;
    reverse(rev1.begin(), rev1.end());
    reverse(rev2.begin(), rev2.end());
    if(rev1 == tes && rev2 == tes2 && tes == tes2){
        flag = true;
    }

    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}