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
    ll numofcows;
    cin >> numofcows;

    int evens = 0;
    int odds = 0;
    int temp;

    for(int i =0; i < numofcows ;  i ++){
        cin>> temp;
        if(temp % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }
    
    // We want to alternate: Even, Odd, Even, Odd...
    // If we have too many odds, we can combine 2 odds together to make 1 even!
    while (odds > evens) {
        odds -= 2;
        evens++;
    }
    
    int counter = 0;
    // If we have perfectly alternating piles
    if (evens == odds) {
        counter = evens + odds;
    } 
    // If we have more evens than odds, the leftovers just get dumped into the first Even group
    else if (evens > odds) {
        counter = (odds * 2) + 1;
    }
    cout << counter;

}