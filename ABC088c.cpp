#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// 各行の最小値を引いた後、各列の値が等しいか判定する
int main(){
    bool flag = true;
    int min;
    vector<vector<int>> box(3, vector<int>(3));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> box.at(i).at(j);
        }
    } 
    for(int i = 0; i < 3; i++){
        min = 100;
        for(int j = 0; j < 3; j++){
            if(min > box.at(i).at(j)){
                min = box.at(i).at(j);
            }
        }

        for(int j = 0; j < 3; j++){
            box.at(i).at(j) -= min;
        }
    }

    for(int i = 0; i < 3; i++){
        if(box.at(0).at(i) != box.at(1).at(i) || box.at(2).at(i) != box.at(1).at(i) || box.at(0).at(i) != box.at(2).at(i)){
            flag = false;
        }
    } 

    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }






}