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
    ll n, k ;
    cin >> n >> k;
    vector<ll> days;
    ll temp;
    bool addedornot = false;

    for(ll i=0;  i < n; i++){
        cin >> temp;
        days.push_back(temp);
            
    }
    ll money = 0;
    ll coverage =0;
    ll others =0;
    ll subc = k;
    ll nomc = 1;
    ll lastactive =0;
    ll diff= 0;

    for(ll i =0; i < n ;  i++){
        if(i == 0){
            money+= (subc + nomc);
            lastactive = 0;

            continue;
        }
        if((days[i] - days[lastactive]) <= subc ){
            diff = days[i] - days[lastactive];
            money+= (diff*1);
lastactive = i;
        }else if(days[i] - days[lastactive] > subc){
            lastactive = i;
            money += (subc + nomc);
            // cout << "added: "<<  money << " --lastactiive: " << i << "--\n";

        } 
    
    }   

    cout << money;

}