#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;    

// author: @ag_wnl (Agnideep Ghosh)
// generate fibonacci numbers in linear fashion and add even terms

void solve(){
  ll n;
  cin >> n;
  ll sum = 2;
  ll prev = 1, cur = 2;

  while(cur <= n) {
    ll te = cur;
    cur += prev;
    if(cur > n) break;
    prev = te;

    if(cur % 2 == 0) sum += cur;
  }  

  cout << sum << "\n";
} 
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) solve();
}
