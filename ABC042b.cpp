#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, L;
    cin >> N >> L;
    string s;
    vector<string> box(N);
    for(int i = 0; i < N; i++){
        cin >> box.at(i);
    }

    sort(box.begin(), box.end());
    for(int i = 0; i < N; i++){
        s += box.at(i);
    }

    cout << s << endl;
}