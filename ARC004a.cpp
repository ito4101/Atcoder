#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    double max, dis;
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));
    for(int i = 0; i < N; i++){
        cin >> grid.at(i).at(0) >> grid.at(i).at(1);
    }
    max = 0;
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            dis = sqrt((grid.at(i).at(0)-grid.at(j).at(0))*(grid.at(i).at(0)-grid.at(j).at(0)) + (grid.at(i).at(1)-grid.at(j).at(1))*(grid.at(i).at(1)-grid.at(j).at(1)));
            if(max < dis){
                max = dis;
            }
        }
    }

    cout << max <<endl;

}