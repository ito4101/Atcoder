#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    vector<bool> box(26);

    cin >> s;

    for(int i = 0; i < 26; i++){
        box.at(i) = false;
    }

    for(int i = 0; i < s.size(); i++){
        box.at(s.at(i) - 'a') = true;
    }

    for(int i = 0; i < 26; i++){
        if(!box.at(i)){
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}