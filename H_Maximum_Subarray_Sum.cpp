#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <utility>
#include <cstdio>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <random>
#include <numeric>
#include <algorithm>
using namespace std;
using ll = long long ;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    //GO
    ll numofelms;
    cin >> numofelms;
    vector<ll > initones;
    ll temp;
    for(ll i= 0;  i< numofelms ; i++){
        cin >> temp;
        initones.push_back(temp);

    }   

    //now we have them
    ll maxpossible = numeric_limits<ll >::min();
    ll accum = 0;
    vector<ll> prefix;
    for(ll i =0 ; i < (numofelms) ;  i++){
        accum +=  initones[i];
    if(accum > maxpossible){
       
        maxpossible = accum;

      
        
        

    }
    if(accum < 0){
          accum = 0;
        
    }
   
    }

    
    cout << maxpossible;
    
}