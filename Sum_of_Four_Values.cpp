/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <numeric>
#include <climits>
#include <cmath>
#include <algorithm>
#include <random>
#include <cstdio>
using namespace std;
using ll = long long;
using ii = int;
#define ss sort((x).begin(),  (x).end()) 
#define pb push_back(x)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO
    //Note: write this sdame problem in terms of you know what, in terms of wherte the coordiatesd begin with 0,0 instead of 1,
    map<pair<ll, ll>, ll> sums;
    ll pairsum = 0;
    ll numofvals;
    ll target;
    cin >> numofvals >> target;
    vector<ll> valsall;
    ll temp;
    for(ll i= 0;  i < numofvals ;  i++){
        cin >> temp;
        valsall.push_back(temp);
    }
    ll sumtemp;
    ll sumtemp1;
    pair<ll , ll > temppair;

    for(ll i =0;  i < numofvals; i++){
        for(ll x  =i+1 ; x < numofvals; x++){
            sumtemp = valsall[i];
            sumtemp1 = valsall[x];
            temppair = {sumtemp, sumtemp1};

            sums[temppair]++;


        }
    }
    ll counter =0;
    pair<ll , ll > temppair1;
    pair<ll , ll > temppair2;
    for(auto i =sums.begin() ; i != sums.end(); i ++){
         for(auto x = next(sums.begin()); x != sums.end(); x++){
            temppair1 = i->first;
            temppair2 = x->first;
            if((temppair1.first + temppair2.first + temppair1.second + temppair2.second) == target){
                counter++;
cout << counter << "\n";
            }
         }   
    }
    
    if(counter == 0){
        cout << "IMPOSSIBLE";
    }

    return 0;
}
