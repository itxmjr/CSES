/*
 * Problem Name: Weird_Algorithm
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-10-31
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
 
 ll n;
 cin >> n;
 
 for(int i = 1; i < 1e6; i++){
     cout << n << " ";
     if(n==1) break;
     if (n%2==0) n/=2;
     else n = (n*3) + 1;
 }
 return 0;
}