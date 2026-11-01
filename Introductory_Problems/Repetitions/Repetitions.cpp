/*
 * Problem Name: Repetitions
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-11-01
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  string s;
  cin >> s;
  int res = 1;
  int curr = 1;
 
  for(int i = 1; i < (int)s.size(); i++){
     curr = (s[i] == s[i-1]) ? curr+1:1;
     res = max(res, curr);
  }
  cout << res << "\n";
  return 0;
}