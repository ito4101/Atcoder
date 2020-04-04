#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, cnt;
    string s;
    map<string, int> box;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        box[s]++;
    }
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        box[s]--;
    }
    int max = 0;
    for(auto p: box){;
        if(max < p.second){
            max = p.second;    //valueにアクセス
        }
    }

    cout << max << endl;

}