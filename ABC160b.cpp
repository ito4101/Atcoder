#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    long long int N, happy;
    cin >> N;
    happy = 0;
    while(N >= 500){
        N -= 500;
        happy += 1000;
    }

    while(N >= 5){
        N -= 5;
        happy += 5;
    }


    cout << happy << endl;
}