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
    vector<string> maps;
    string tempcity;
    string tempstate;
    string cityneeded;
    cin>> numofcities;
    for(ll i =0 ; i < numofcities; i ++){
        cin >> tempcity >> tempstate;
        cityneeded = tempcity.substr(0, 2);
        
            maps.push_back(cityneeded + tempstate);
        

    }
    sort(maps.begin(),maps.end());
    ll counter = 0;
    for(auto i =maps.begin() ; i != maps.end() ; i++){
        for(auto x = next(i); x !=  maps.end(); x++){
            if((*i).substr(0,2) == (*x).substr(2,2) && (*i).substr(2,2) == (*x).substr(0,2)){
                counter ++;

            }else{  
                continue;
            }
        }
    }

    cout << counter;
    /*
    4. How to spot this pattern in the future
Next time you are in a contest, look for these clues to trigger this "encoding" method:

Multiple properties belong to one entity: (e.g., A cow has a color and a weight, or a coordinate has an X and a Y).
The properties have strict, predictable bounds: (e.g., Exactly 2 characters, or exactly 3 digits).
You need to compare these entities quickly: Comparing one concatenated string ("MIFL" == "MIFL") is much faster and requires less code than comparing properties of structs (a.city == b.city && a.state == b.state).
    */
 }  