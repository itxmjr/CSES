/*
 * Problem Name: Increasing_Array
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-11-02
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
 
  int n;
  cin >> n;
 
  ll x, prev = 0, res = 0;
  for (int i = 0; i < n; i++){
      cin >> x;
      if(i == 0){
          prev = x;
          continue;
      }
      if(x < prev) res += prev - x;
      else prev = x;
  }
  cout << res << "\n";
  return 0;
}