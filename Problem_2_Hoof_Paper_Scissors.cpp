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
    ll numofgames ;
    cin >> numofgames;
    vector<ll> fjmoves;
    //Here, the 0 represents, scissors and the 1 represents the hoof and the 2 represents trhe paper.
    char temp ;
    for(ll  i= 0; i < numofgames; i++){
        cin>> temp;
        if(temp =='S'){
            fjmoves.push_back(0);
        }else if(temp == 'H'){
            fjmoves.push_back(1);
            
        }   else{
            fjmoves.push_back(2);
        }      
    }

    vector<ll> attackset;
    for(ll i= 0; i < numofgames;  i++){
        if(fjmoves[i] == 2){
            attackset.push_back(0);

        }else if(fjmoves[i] == 1){
            attackset.push_back(2);
        }else{
            attackset.push_back(1);
        }
    }
    sort(attackset.begin(), attackset.end(), [](auto a, auto b){
        return a > b;

    });
    ll tempval3 = 0;

   ll zeroparty = count(attackset.begin(), attackset.end(), 0);
    ll oneparty = count(attackset.begin(), attackset.end(), 1);
     ll twoparty = count(attackset.begin(), attackset.end(), 2);
    vector<ll> counts = {zeroparty, oneparty, twoparty};
    sort(counts.begin(), counts.end(), greater<ll>());
    ll largest = counts[0];
    ll next_largest = counts[1];

    ll flips = 0;
    for(ll i = 1; i < attackset.size(); i++){
        if(attackset[i] != attackset[i-1]){
            if(attackset[i] != largest && attackset[i] != next_largest){
                attackset[i] = attackset[i-1];
                flips++;
            }
        }
    }
    cout << attackset.size() - flips << "\n";

}