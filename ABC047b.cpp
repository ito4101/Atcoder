#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int H, W, N, M, cnt, WW, HH;
    cin >> W >> H >> N;
    vector<vector<bool>> block(W, vector<bool>(H));
    cnt = 0;
    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            block.at(i).at(j) = false;
        }
    }

    for(int i = 0; i < N; i++){
        cin >> WW >> HH >> M;
        switch (M)
        {
        case 1:
            for(int i = 0; i < WW; i++){
                for(int j = 0; j < H; j++){
                    block.at(i).at(j) = true;
                }
            }
            break;
        case 2:
            for(int i = WW; i < W; i++){
                for(int j = 0; j < H; j++){
                    block.at(i).at(j) = true;
                }
            }
            break;
        case 3:
            for(int i = 0; i < W; i++){
                for(int j = 0; j < HH; j++){
                    block.at(i).at(j) = true;
                }
            }
            break;
        case 4:
            for(int i = 0; i < W; i++){
                for(int j = HH; j < H; j++){
                    block.at(i).at(j) = true;
                }
            }
            break;

        }
    }

    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            if(!block.at(i).at(j)){
                cnt++;
            }
        }
    }

    cout << cnt << endl;


}