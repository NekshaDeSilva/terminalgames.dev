#include <iostream>
#include <iomanip>
#include <string>
#include <numeric>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>
#include <random>
#include <thread>
#include <climits>
#include <unordered_set>

using namespace std;
using ll = long long;
using iii = int;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO        
    ll numofc;
    cin >> numofc;
    multiset<pair<ll, ll>> times; 
    ll temp1, temp2;
    for(int i =0; i < numofc; i++){
        cin >> temp1 >> temp2;
        times.insert({temp2, temp1});//ponut out this inserting method, this scares you evertime.

    }

    ll lastEnd = 0;
    ll answer = 0;
    for (auto mv : times) {
        ll endt = mv.first;
        ll startt = mv.second;
        if (startt >= lastEnd) {
            answer++;
            lastEnd = endt;
        }
    }
    cout << answer;
}