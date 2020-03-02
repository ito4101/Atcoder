#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> bingo(3, vector<int>(3));
int bingocheck(){
    int w;
    //横チェック
    for(int i = 0; i < 3; i++){
        w = 0;
        for(int j = 0; j < 3; j++){
                w += bingo.at(i).at(j);
            }
        if(w == 0){
            return 1;
        }
    }
    //縦チェック
    for(int i = 0; i < 3; i++){
        w = 0;
        for(int j = 0; j < 3; j++){
                w += bingo.at(j).at(i);
            }
        if(w == 0){
            return 1;
        }
    }
    //斜めチェック
    w = 0;
    for(int i = 0; i < 3; i++){
        w += bingo.at(i).at(i);
    }
    if(w == 0){
        return 1;
    }

    w = 0;
    for(int i = 0; i < 3; i++){
    w += bingo.at(i).at(2-i);
    }
    if(w == 0){
        return 1;
    }

    return 0;
}

int main(){
    int n, temp, check;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> bingo.at(i).at(j);
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(bingo.at(i).at(j) == temp){
                    bingo.at(i).at(j) = 0;
                    break;
                }
            }
        }
    }

    if(bingocheck()){
        cout<< "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}