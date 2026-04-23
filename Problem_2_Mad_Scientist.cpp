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
    freopen("breedflip.in", "r" ,stdin);
    freopen("breedflip.out", "w" , stdout);
    ll numofelms = 0;
    cin >> numofelms;
    vector<char> target;
    vector<char> whatwehave;
    whatwehave.reserve(numofelms);
    target.reserve(numofelms);
    char temp ;

    for(ll i =0; i < numofelms; i++){
        cin >> temp;
        target.push_back(temp);
        
    }
    for(ll i =0;  i < numofelms ; i++){
        cin >> temp;
        whatwehave.push_back(temp);

    }
    vector<ll> strtaken;
    ll counterx  =0;

    for(ll i =0 ; i < numofelms ; i ++){
        
        if(target[i] == whatwehave[i] ){
            
            if(strtaken.size() != 0){
                  counterx++;
strtaken.clear();
                for(ll x = 0;  x < strtaken.size(); x++){
                    if(whatwehave[x] == 'H'){
                        whatwehave[x] = 'G';
                        
                    }else{
                        whatwehave[x] = 'H';

                    }
                }
            }
            continue;
        }else{
            strtaken.push_back(i);
            
            
          
        }
    }
    cout << counterx;


}