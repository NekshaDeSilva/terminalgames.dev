/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
#include <algorithm>
#include <random>
#include <numeric>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //go
    ll numoftc;
    ll numofc;
    cin >> numoftc >> numofc;
    vector<ll> maxvalues;
    multiset<ll, greater<ll>> tickvalues;
    ll  temp;

    for(ll i =0;  i < numoftc; i ++){
        cin >> temp;
        tickvalues.insert(temp);

    }
    for(ll i = 0 ; i < numofc ; i++){
        cin >> temp;
        maxvalues.push_back(temp);

    }
 
    vector<ll> fianls;

    fianls.reserve(numofc);

    // do not auto-increment in the loop header, because we erase `x` inside the loop.
    // We will move to the next valid iterator using the return value of `erase(x)`.
    for(auto x  = maxvalues.begin(); x != maxvalues.end();x++){
        
            // auto rangestart = lower_bound(tickvalues.begin(), tickvalues.end(), *x);
            auto rangestart = tickvalues.lower_bound(*x); //we have now used this one which is faster with only a one argument. previosuloy., i had use to three argument,s its fine, but it takes more processoing power as beaver says, so we need to be carefull/. use the one argument method when you try to find a one specific value in the *entire search selection without a constraint*
            if(rangestart == tickvalues.end()){//what this actually does is that if the value ois not foiund insiude oit, so then after that, it returns this specific thing., right after itl, an dthat is a must remind for you. because that is realll,y valuesbler and this isd also effective ewith erase() fucntion and the find() function, and also the upper_boiund() fucntio n as well.,

                fianls.push_back(-1);

            }else{
                fianls.push_back(*rangestart); 
                tickvalues.erase(rangestart);
            }
            
            // auto locationofx = maxvalues.find(*x); commnetd because we used the for loop with pointers instead of the valkue for loop which is for(c auto x: y).


            
           



        

                //  `erase(x)` invalidates `x`; assigning the returned iterator avoids undefined behavior.
            // x = maxvalues.erase(x);//here we've got the pointer of the x in this way.
      
            
    }

    for(ll i =0 ; i < fianls.size(); i++){
    cout << fianls[i] << "\n";

    }


}