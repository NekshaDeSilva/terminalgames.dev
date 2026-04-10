#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <climits>
#include <algorithm>
#include <numeric>
#include <random>
#include <utility>
#include <set>
using ll = long long;
using namespace std;

ll  recurse(vector<ll>& weights1, ll numofc, ll maxw, vector<pair<ll ,ll>>& ferris){
    multiset<ll> weights;
    for(int i =0; i < numofc ; i++){
        weights1.insert(weights1[i]);
        
    }

    ll carts =0;
    multiset comp<int,  greater<int>>
    auto it;

    for(int i =0;  i <  numofc; i ++){
        it = weights.find(i);

        if(weights[i] > maxw){
            carts++;
            
        }else{
            auto firstchild = lower_bound(weights1[i]);
            auto secchildv = upper_bound(abs(maxw-weights[i]));
            if(weights[firstchild])
        }
    }

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go

    ll numofc;
    ll maxw;
    cin>> numofc  >> maxw;
    vector<ll> weights;
    weights.reserve(numofc);
    ll temp;
    vector<pair<ll, ll>> ferris;

    for( int i =0;  i <  numofc; i++){
        cin >> temp;
        weights.push_back(temp);

    }

    sort(weights.begin(), weights.end());



    ll val  =     recurse(weights, numofc, maxw, ferris);
    cout << val;

    
}
