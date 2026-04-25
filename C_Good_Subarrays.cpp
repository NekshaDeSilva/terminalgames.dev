/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>
#include <random>
#include <string>
#include <array>
#include <vector>
using  ll =long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll t;
    if (cin >> t) {
        while (t--) {
            ll n;
            cin >> n;
            
            string s;
            cin >> s;
            
            ll ans = 0;
            ll sum = 0;
            map<ll, ll> cnt;
            
            cnt[0] = 1; 
            
            for (int i = 0; i < n; i++) {
                ll val = (s[i] - '0') - 1; 
                
                sum += val;
                
                ans += cnt[sum];
                
                cnt[sum]++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}