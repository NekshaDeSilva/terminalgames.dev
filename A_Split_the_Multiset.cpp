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

    multiset<pair<int, string>, greater<int, string>> playerprofile;
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

    auto repitions;
    for(auto x : playerprofile){
        
        if(x  == playerprofile.end()){
            break;

        }
        
        repitions = equal_range(x.first);
            playerprofile.erase( repitions.first, repitions.second);


    }
    // for(;;){

    
    //     if(distance(repitions.first , repitions.second)){
    //         /*the first isnt a integer her, but rather,m its a pointer, which means that if need to loiokj for whether specific values has reached top oits dead end, what we have to do is, we need to now, what we have to do now is, that we need to make is that wer need to check whethwer in the pair that is returned by the equal range set are the same., if they're same l, which means that, that specific mulitset or vector(yes thisd is salso vbaliexcd for vector stoo) themn it will gonna work*/

    //         continue;
            
    // }

    int counter = 0;

    for(auto x : playerprofile){        
        if(counter > numofc-4){
            if(x == playerprofile.end()){
                continue;   
            }
            cout << x.first  << ":"  << x.second<< "\n";

        }
        counter++;
    }   
    

}
