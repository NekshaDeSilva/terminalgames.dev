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
// #include <fstream>  a new lib just used for context
using  ll =long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("promote.in", "r" ,stdin);
    freopen("promote.out", "w" , stdout);
    vector<pair<ll, ll>> comps;
    comps.resize(4);

    ll temp1, temp2;
    pair<ll, ll > temp3;
    for(ll i =0; i < 4; i++){
        cin>> temp1 >> temp2;
        temp3 = {temp1, temp2};
        comps[i] = temp3;


    }
    vector<ll> promoted;
    promoted.reserve(4-1);
    for(ll i =3;  i>=0; i --){
        ll tempbefore = comps[i].first;
        ll tmepafter = comps[i].second;
        ll diff = tmepafter - tempbefore;
        if( diff == 0){
            continue;

        }else if(diff != 0 && (i-1) >= 0){
            comps[i-1].second+= diff;
            promoted.push_back(diff);


        }   

          
    }

    for(ll i =0;  i < 3; i++){
        cout << promoted[i] << "\n";
    }
}