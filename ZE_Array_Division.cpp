#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <utility>
#include <cstdio>
#include <random>
#include <climits>
#include <algorithm>
#include <fstream>

using namespace std;
using ll = long long;
using ss =string;
using db  =double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define sort(x) sort(x.begin(), x.end())

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n_v, k_g;
    if (!(cin >> n_v >> k_g)) return 0;
    vector<ll> vals(n_v);
    ll tot = 0, mx = 0;
    for (int idx = 0; idx < n_v; ++idx) {
        cin >> vals[idx];
        tot += vals[idx];
        mx = max(mx, vals[idx]);
    }

    ll lo = mx, hi = tot;
    while (lo < hi) {
        ll midv = lo + (hi - lo) / 2;
        int grp = 1;
        ll cur = 0;
        for (int idx = 0; idx < n_v; ++idx) {
            if (cur + vals[idx] <= midv) {
                cur += vals[idx];
            } else {
                ++grp;
                cur = vals[idx];
            }
        }
        if (grp <= k_g) hi = midv; else lo = midv + 1;
    }

    cout << lo << '\n';
    return 0;
}
