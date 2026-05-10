#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <climits>
#include <fstream>
#include <numeric>
#include <random>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <utility>
using namespace std;
using ll = long long;
using ss = string;
using db = double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define sort(x) sort(x.begin(), x.end())
#define maxelm(x) max_element(x.begin(), x.end())
#define minelm(x) min_element(x.begin(), x.end())

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll numofmv, numofm;
	cin >> numofmv >> numofm;

	vector<pair<ll,ll>> list(numofmv);
	for(ll i = 0; i < numofmv; i++){
		ll stt, ett;
		cin >> stt >> ett;
		list[i] = {ett, stt};
	}

	sort(list);

	multiset<ll> endt;
	for(ll i = 0; i < numofm; i++){
		endt.insert(0);
	}

	ll countm = 0;
	for(const auto &movie : list){
		ll ett = movie.first;
		ll stt = movie.second;

		auto it = endt.upper_bound(stt);
		if(it == endt.begin()){
			continue;
		}
		--it;
		endt.erase(it);
		endt.insert(ett);
		countm++;
	}

	cout << countm << "\n";
	return 0;
}
