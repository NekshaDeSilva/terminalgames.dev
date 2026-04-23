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
using  ll =long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // freopen("citystate.in", "r" ,stdin);
    // freopen("citystate.out", "w" , stdout);

    ll nuofmonsters;
    ll numpoly ;
    cin >> nuofmonsters >> numpoly;
    vector<ll > judgements;
    judgements.reserve(nuofmonsters);
    vector<ll> userglitechs;
    userglitechs.reserve(numpoly);
    ll tempval1;
    ll tempval2;
    
    for(ll i=0; i < nuofmonsters; i ++){
        cin >> tempval1;
        if(i > 0) tempval1 += judgements[i-1];
        judgements.push_back(tempval1);

    }
    for(ll i= 0; i < numpoly; i++){
        cin >> tempval2;
        userglitechs.push_back(tempval2);

    }
    ll counter = 0;
    ll valx = 0;
    set<ll> validstarts;

    for(ll i =0 ;i < nuofmonsters; i++){
        valx = (userglitechs[0] - judgements[i]);
        
        bool works = true;
        for(ll x = 0; x < numpoly;  x++){
            ll memoryneeded = userglitechs[x] - valx;
            auto val1 = find(judgements.begin(), judgements.end(), memoryneeded);
            
            if(val1 == judgements.end()){
                works = false;
                break;
            }
        }
        
        if(works){
            validstarts.insert(valx);
        }
    }
    
    counter = validstarts.size();
    cout << counter;

}