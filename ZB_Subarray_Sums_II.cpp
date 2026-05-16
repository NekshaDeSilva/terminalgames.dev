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

	int n;
	long long x;
	if (!(cin >> n >> x)) return 0;
	vector<long long> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];

	unordered_map<long long, long long> cnt;
	cnt.reserve(n * 2);
    cnt[0] = 1;
	long long pref = 0;
	long long ans = 0;


	for (int i = 0; i < n; ++i) {
		pref += a[i];
		long long need = pref - x;
		auto it = cnt.find(need);
		if (it != cnt.end()) ans += it->second;
		++cnt[pref];
	}

	cout << ans << '\n';
	return 0;
}