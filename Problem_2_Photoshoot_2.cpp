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
    // freopen("breedflip.in", "r" ,stdin);
    // freopen("breedflip.out", "w" , stdout);
    ll numofcows;
    cin>> numofcows;
    vector<ll > cows;
    vector<ll> need;
    ll temp;

    for(ll i =0;  i < numofcows*2; i++){
         if(i >= numofcows){
            int newi  = (i-numofcows);
            cin >> temp;
            need.push_back(temp);
            continue;
        }
        cin >> temp;
        cows.push_back(temp);
       
    }
    ll counter = 0;

    for(ll i= 0; i < numofcows ; i++){
        if(cows[i] == need[i] ){
            
            continue;

        }
    else if(cows[i] != need[i]){
        counter++;
        

        auto loc1 = find(cows.begin(), cows.end(), need[i]);
        ll loc2= (loc1 - cows.begin());
        ll temp2 = cows[loc2] ;
        
        for(ll o = loc2; o > i; o--){
            cows[o] = cows[o-1];
        }
        cows[i] = temp2;

    }

    }
    cout << counter;
    
}