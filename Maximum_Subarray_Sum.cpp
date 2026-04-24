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

    //RULW OF THUMB: SUBARRAY ALWAYS MEANS CONSECUTIVE.
    //rule of thumb, IT  is that the subarray always means consecutive elemtns.
    ll numofelms ;
    cin>> numofelms;
    vector<ll> list;
    ll tmep;

    for(ll i =0;  i < numofelms; i++){
        cin >> tmep;

        list.push_back(tmep);

    }
    vector<ll> sums;
    sums.resize(numofelms+1, 0);

    for(ll i =0; i <= numofelms; i++){

    if(i == 0 ){
        sums[0] = 0;
        continue;
    }

  sums[i] = sums[i - 1] + list[i - 1];
  
    

    }
    // //the upper process will become only just o(n);
    // -1 3 -2 5 3 -5 2 2
    // 0 2  0 5 8  3 5 7
      auto max = max_element(sums.begin(), sums.end());
    auto min = min_element(sums.begin(), max);


    ll result = *max - *min;
    cout << result;
    



}

