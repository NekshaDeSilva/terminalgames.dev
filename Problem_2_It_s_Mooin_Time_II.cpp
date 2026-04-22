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
    // freopen("notlast.in", "r" ,stdin);
    // freopen("notlast.out", "w" , stdout);
    ll numofdigs = 0;
    cin >> numofdigs;
    multiset<ll> list;
    set<multiset<ll>> finlist;

    ll temp;

    for(ll i =0; i < numofdigs; i++){
        cin >> temp;
        list.insert(temp);

    }
    
    multiset<ll> tempmultiset;
    for(auto i = list.begin(); i != list.end(); i++){
            for(auto x  = (next(i)); x != list.end(); x++){
                
                tempmultiset.clear();
                
                if((next(x)) != list.end() && (*i) != (*x) &&  (*x) == *(next(x)) ){
                    tempmultiset.insert(*i);
                    tempmultiset.insert(*x);
                    tempmultiset.insert(*(next(x)));
                    finlist.insert(tempmultiset);
                }else{
                    if((next(x)) != list.end() && (*i) == (*x) &&  (*x) != *(next(x))){
                    tempmultiset.insert(*i);
                    tempmultiset.insert(*x);
                    tempmultiset.insert(*(next(x)));
                    finlist.insert(tempmultiset);
                    }else{
                        continue;
                    }
                    
                }
                
            }
           
    }
 
    cout << finlist.size();

}