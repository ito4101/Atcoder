#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, max, con;
    cin >> a;
    vector<string> paper(a), test;
    for(int i = 0; i < a; i++){
        cin >> paper.at(i);
    }
    sort(paper.begin(), paper.end());
    max = 0;
    for (int i = 0; i < a; i++){
        int j = i;
        con = 0;
        bool flag = true
        do{
            con++;
            j++;
            string comp1 = paper.at(i);
            string comp2 = paper.at(j);
            if(comp1 != comp2){
                flag = false;
            }
        }while(flag);
        if(con >= max){
            if(con == max){
                test.push_back(paper.at(i));
            } else {
                max = con;
                test.erase(test.begin(), test.end());
                test.push_back(paper.at(i));
            }
        }
        i +=  (con-1);
    }
    for(string i : test){
        cout << i << endl;
    }

}