#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()


int main(){
    int N, cnt;
    string text;
    cin>> N;
    map<string, int> base;
  rep(i , N){
      cin >> text;
      base[text]++;
  }

  cnt = base.size();

  cout << cnt << endl;
    
}