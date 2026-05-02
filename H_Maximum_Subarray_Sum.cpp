#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <numeric>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <random>
#include <cstdio>
#include <fstream>
#include <utility>

using namespace std;
using ll = long long ;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    //go

    ll numofelms = 0;
    cin >> numofelms;
    vector<ll> values;
    ll temp;
    for(ll i =  0 ; i < numofelms ; i++){
        cin >> temp;
        values.pb(temp);
        

    }

    vector<ll> prefixes;
    prefixes.resize(numofelms);

    
    ll accum  =0;
    ll curr =0;
ll  ll minm  = numeric_limits<ll>::min();

    for(ll i= 0;  i < numofelms; i ++){
        curr =    values[i] 
        if(prefixes[i] > minm){
            accum=0;
            accum += curr;
            prefixes[i] += 
            minm = prefixes[i];
        }

        

        


    }
}