/*
 * Problem Name: Missing_Number
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
 
  int n;
  cin >> n;
  int v;
  ll sum = (ll)n * (n+1)/2;
  for(int i = 1; i<n;i++){
      cin >> v;
      sum -= v;
  }
  cout << sum << "\n";
  return 0;
}