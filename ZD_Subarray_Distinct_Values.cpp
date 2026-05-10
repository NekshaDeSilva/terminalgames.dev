#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <climits>
#include <fstream>
#include <numeric>
#include <random>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <utility>
using namespace std;
using ll =long long;
using ss = string;
using db = double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define sort(x) sort(x.begin(), x.end())
#define maxelm(x) max_element(x.begin(), x.end())
#define minelm(x) min_element(x.begin(), x.end())
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll numofelms, maxdistinct;
    cin >> numofelms >> maxdistinct;
    
    vector<ll> list(numofelms);
    for(ll i = 0; i < numofelms; i++){
        cin >> list[i];
    }
    
    map<ll, ll> freq;
    ll totalans = 0;
    ll leftpointer = 0;
    
    for(ll rightpointer = 0; rightpointer < numofelms; rightpointer++){
        freq[list[rightpointer]]++;
        
        while(freq.size() > maxdistinct){
            freq[list[leftpointer]]--;
            
            if(freq[list[leftpointer]] == 0){
                freq.erase(list[leftpointer]);
            }
            leftpointer++;
        }
        
        totalans += (rightpointer - leftpointer + 1);
    }
    
    cout << totalans << "\n";
    return 0;
}