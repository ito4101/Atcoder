#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, M, cntV, cnt;
    cin >> N >> M;
    vector<int> box(N);
    vector<bool> vote(N);
    for(int i = 0; i < N ; i++){
        vote.at(i) = false;
    }
    cntV = 0;
    cnt = 0;
    for(int i = 0; i < N ; i++){
        cin >> box.at(i);
        cntV += box.at(i);
    }

    for(int i = 0; i < N ; i++){
        if(cntV % (4*M) == 0){
            if(box.at(i) >= cntV / (4*M)){
                vote.at(i) = true;
            }
        }else{
            if(box.at(i) > cntV / (4*M)){
                vote.at(i) = true;
            }
        }
    }

    for(int i = 0; i < N ; i++){
        if(vote.at(i) == true){
            cnt++;
            if(cnt == M){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

}