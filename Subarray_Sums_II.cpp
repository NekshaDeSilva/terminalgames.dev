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
    // freopen("breedflip.in", "r" ,stdin);
    // freopen("breedflip.out", "w" , stdout);
    
    vector<ll> list;
    ll numofelms = 0;
    cin  >> numofelms;
    ll target = 0;
    cin >> target;
    ll temp =0;  

    for(ll i = 0; i < numofelms; i++){
        cin >> temp;
        list.push_back(temp);

    }
    ll sumtot = 0;
    unordered_map<ll, ll> allsusmlist;
    ll needed = 0;
    ll resultbucket = 0;
    allsusmlist[0] = 1;
    for(ll i =0 ;  i <  numofelms; i ++){
        sumtot+=list[i];
       
        needed = sumtot-target;
        ll locationsubs = allsusmlist.count(needed);

        if(locationsubs != 0){
           for(int c= 0;  c < locationsubs; c++){
            resultbucket++;

           }

        } 
        allsusmlist[sumtot]++;
    }
    cout << resultbucket;
    
    
      
}