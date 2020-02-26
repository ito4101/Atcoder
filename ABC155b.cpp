#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    bool flag = true;
    vector<int> paper(a);
    for(int i = 0; i < a; i++){
        cin >> paper.at(i);
    }
    int j = 0;
    while(j < a){
        if(paper.at(j) % 2 == 0){
            if(paper.at(j) % 3 != 0 && paper.at(j) % 5 != 0){
                flag = false;
            }
        }
        j++;
    }
    if(flag){
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }

}