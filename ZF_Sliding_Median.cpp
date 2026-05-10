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
    
    ll numofvals, windowsize;
    cin >> numofvals >> windowsize;
    
    vector<ll> list(numofvals);
    for(ll i = 0; i < numofvals; i++){
        cin >> list[i];
    }
    
    multiset<ll> lowset;
    multiset<ll> highset;
    
    auto balance = [&]() {
        if(!lowset.empty() && !highset.empty() && *prev(lowset.end()) > *highset.begin()) {
            auto itLow = prev(lowset.end());
            auto itHigh = highset.begin();
            ll lowVal = *itLow;
            ll highVal = *itHigh;
            lowset.erase(itLow);
            highset.erase(itHigh);
            lowset.insert(highVal);
            highset.insert(lowVal);
        }
        while(lowset.size() > (windowsize + 1) / 2) {
            auto it = prev(lowset.end());
            highset.insert(*it);
            lowset.erase(it);
        }
        while(lowset.size() < (windowsize + 1) / 2 && !highset.empty()) {
            auto it = highset.begin();
            lowset.insert(*it);
            highset.erase(it);
        }
        if(!lowset.empty() && !highset.empty() && *prev(lowset.end()) > *highset.begin()) {
            auto itLow = prev(lowset.end());
            auto itHigh = highset.begin();
            ll lowVal = *itLow;
            ll highVal = *itHigh;
            lowset.erase(itLow);
            highset.erase(itHigh);
            lowset.insert(highVal);
            highset.insert(lowVal);
        }
    };
    
    for(ll i = 0; i < windowsize; i++){
        lowset.insert(list[i]);
    }
    balance();
    
    cout << *prev(lowset.end());
    
    for(ll i = windowsize; i < numofvals; i++){
        ll oldval = list[i - windowsize];
        
        auto itLow = lowset.find(oldval);
        if(itLow != lowset.end()){
            lowset.erase(itLow);
        } else {
            auto itHigh = highset.find(oldval);
            if(itHigh != highset.end()){
                highset.erase(itHigh);
            }
        }
        
        if(lowset.empty() || list[i] <= *prev(lowset.end())){
            lowset.insert(list[i]);
        } else {
            highset.insert(list[i]);
        }
        
        balance();
        
        cout << " " << *prev(lowset.end());
    }
    
    cout << "\n";
    return 0;
}
