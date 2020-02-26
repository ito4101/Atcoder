#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, temp, sum1, sum2, min;
    sum1 = 0;
    sum2 = 0;
    cin >> n;
    vector <int> N(n);
    for(int i = 0; i < n; i++){
        cin >> N.at(i);
        sum1 += N.at(i);
    }
    temp = sum1 / n;
    for (int j = 0; j < n; j++){
        sum2 += (temp - N.at(j))*(temp - N.at(j));
    }
    min = sum2;
    sum2 = 0;
    for (int j = 0; j < n; j++){
        sum2 += (temp + 1 - N.at(j))*(temp + 1 - N.at(j));
    }
    if(min > sum2){
        min = sum2;
    }

    cout << min << endl;
}