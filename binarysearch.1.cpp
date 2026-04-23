#include <bits/stdc++.h>
#include <iterator>
using namespace std;
using ll = long long;
int main(){
    ll target = 0;
    cin >> target;
    vector<ll> list;
    list.reserve(pow(target, 3));
    list.resize(pow(target, 3));
    iota(list.begin(), list.end(), 0);
    ll sizede = list.size();
    
    
    // for(ll i =0 ;  i < list.size(); i++){
    //     while()
    //     /*
    //     Using std::prev: Returns a new iterator pointing to the previous element without changing the original.
    //     Using --iterator: Moves the current iterator one step back.
    //     */
    // }
}