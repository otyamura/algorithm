#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
int main(){
  ll n;
  cin >> n;
  ll count = 0;
  ll dif = 1;

  while (n > 0) {
    ll tmp = n / 1000;
    if (tmp < 0) {
      count += tmp * (dif - 1);
      break;
    } else {
      count += n % 1000 * dif;
    }
    n /= 1000;
    dif++;
  }

  cout << count << endl;
  return 0;
}
