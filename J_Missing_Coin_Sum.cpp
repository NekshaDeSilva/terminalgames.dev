#include <iostream>
#include  <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <climits>
#include <utility>
#include <random>
#include <cstdio>
using namespace std;
using ll = long long;
using iii = int;
using ss  = string;
using dd  = double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll numofvals ;
    cin >> numofvals;
    vector<ll> list;
    ll tmp;

    for(ll i = 0; i < numofvals; i++){
        cin >> tmp;
        list.push_back(tmp);

    }
    ll prev = 0;
    sort(list.begin(), list.end());
    

    
    for(auto eachelm : list){
        
        if(prev+1 < eachelm){

            break;

        }
        prev+= eachelm;

    }
    cout << prev+1;

    return 0 ;
}