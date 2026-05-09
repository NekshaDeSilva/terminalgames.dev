#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <fstream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>
#include <numeric>
#include <string>
#include <utility>
#include <random>
#include <chrono>
using namespace std;
using ll = long long;
using ss= string;
using dd = double;
#define sort(x) sort(x.begin(), x.end())
#define pb(x) push_back(x)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll numofsongs;
    vector<ll > list;
    cin >> numofsongs;
    
    vector<ll> list(numofsongs);
    for(ll i  = 0 ; i < numofsongs; i++){
        cin >> list[i];
    }
        map<ll, ll> last_seen;

    ll maxvalsofar = 0;
    ll left = 0;
    
    for(ll right = 0; right < numofsongs ; right++){
        ll current_song = list[right];
        
        if(last_seen.count(current_song) && last_seen[current_song] >= left) {
            left = last_seen[current_song] + 1;
        }
        
        last_seen[current_song] = right;
        maxvalsofar = max(maxvalsofar, right - left + 1);
    }
    
    cout << maxvalsofar << "\n";
    return 0;
    
}
