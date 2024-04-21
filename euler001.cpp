#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;    
#define all(x) (x).begin(), (x).end()
const int MAXN = 1e5+5;

// author: @ag_wnl (Agnideep Ghosh)
// 3 + 6 + 9 can be written as 3/3 * (3+6+9) = 3 * (3/3 + 6/3 + 9/3) = 3 * (1+2+3)
// numbers which have both factors of 3 and 5 will be divisible by 3 * 5 = 15, so subtract these values from answer to prevent double counting

long long meow(int n, int x) {
  ll cnt = (n-1) / x;
  ll sum = (cnt * (cnt+1)) / 2;
  return 1LL*x*sum;
}

void solve(){
  ll n;
  cin >> n;
  ll val3 = meow(n, 3);
  ll val5 = meow(n, 5);
  ll val15 = meow(n, 15);

  cout << val3 + val5 - val15 << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) solve();
}
