#include <iostream>
#include <iomanip>
#include <string>
#include <numeric>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>
#include <random>
#include <thread>
#include <climits>

using namespace std;
using ll = long long;
using iii = int;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO        

    // Split the Multiset (Codeforces A)
    // Added as an early-return block so existing code stays in the file unchanged.
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll ans = (n - 1 + (k - 2)) / (k - 1); // ceil((n-1)/(k-1))
        cout << ans << "\n";
    }
    return 0;
    
    multiset<pair<int, string>, greater<pair<int, string>>> playerprofile;
    //how to make a copy of the vectors, mulsets or arrays, the thing is siple what you have to do is, 
    /*multiset<int> someset;
      someset.insert(anotherset.begin(), anotherset.end();
     and if you need to initalize a new one using another vector's values., essentially making a full complete copy, 
      
     multiset<ll> snotherset(someset.begin(), someset.end();

     this is also true for the vector and you  can easily use this with vectors too.
     


    */
    int temp;
    string temp2;
    int numofc ;
    cin >> numofc;
    pair<int, string> tempp;

    for(int i = 0;  i < numofc ; i++){
        cin >> temp2 >> temp;
        tempp.first = temp;
        tempp.second = temp2;

    playerprofile.insert(tempp);

    }

    // auto repitions; /*critical EEROR:: YOU CANT DECLARE AUTO ALONE HEREL. AUTO MUSDT KNOW ITS TYPE IMIDTAE=LY AT THE TIME OF IITAILIZATION. MUST RULE. */
    // Fix: added missing ';' so this statement ends correctly and the next line can compile.
    ll distance42 = distance(playerprofile.begin(), playerprofile.end());
 
 
    // Fix: corrected `for` syntax to use ';' separators and increment the iterator itself.
    // (Kept this loop structure, only made it syntactically valid.)
    for(auto it = playerprofile.begin(); it != playerprofile.end(); ++it){

        
    }
    //for(;;){

    
    //     if(distance(repitions.first , repitions.second)){
    //         /*the first isnt a integer her, but rather,m its a pointer, which means that if need to loiokj for whether specific values has reached top oits dead end, what we have to do is, we need to now, what we have to do now is, that we need to make is that wer need to check whethwer in the pair that is returned by the equal range set are the same., if they're same l, which means that, that specific mulitset or vector(yes thisd is salso vbaliexcd for vector stoo) themn it will gonna work*/

    //         continue;
            
    // }

    int counter = 0;
    // Fix: declare `lastint` before use (it was used below but never declared).
    int lastint = INT_MIN;
    // int lastint = *[playerprofile.end()-1]; NOTE: WE cabnnot use this in herwe at all like we do usually do in vectore,s in here, we have to keep in lour midn that the pointers or the pointer addresses are not linear. which means that they;rent somehow linear,so hence you cannot go backward and froqwarfd with +1,+2,-2, etc. so sicne that is the casde, what we have to do is, that we need to make sure that 

    for(auto x : playerprofile){        
        if(counter > numofc-4){
            if(x.first == lastint){
                continue;   
            }
            cout << x.first  << ":"  << x.second<< "\n";
            // Fix: remember last printed value so duplicate scores can be skipped safely.
            lastint = x.first;

        }
        counter++;
    }   
    

}
