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
    freopen("citystate.in", "r" ,stdin);
    freopen("citystate.out", "w" , stdout);
    ll numofcities  =0; 
    map<string, ll> maps;
    string tempcity;
    string tempstate;
    string cityneeded;
    cin>> numofcities;
    for(ll i =0 ; i < numofcities; i ++){
        cin >> tempcity >> tempstate;
        cityneeded = tempcity[0] + tempcity[1];
        maps.insert(cityneeded);
        maps.insert(tempstate);

    
    }
    // sort(maps.begin(),maps.end());
    ll counter = 0;
    for(auto i =maps.begin() ; i != maps.end() ; i++){
        for(auto x = next(i); x !=  maps.end(); x++){
            if(*i == *x){
                counter ++;

            }else{  
                continue;
            }
        }
    }

    cout << counter;
    
 }  