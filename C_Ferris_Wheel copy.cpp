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

ll  recurse(vector<ll>& weights, ll numofc, ll maxw, vector<pair<ll ,ll>>& ferris){

    

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
