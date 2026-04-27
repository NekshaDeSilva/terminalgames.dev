/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <numeric>
#include <climits>
#include <cmath>
#include <algorithm>
#include <random>
#include <cstdio>
using namespace std;
using ll = long long;
using ii = int;
#define ss sort((x).begin(),  (x).end()) 
#define pb push_back(x)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO
    ll numofints;
    ll target;
    cin >> numofints >> target;
    vector<ll> list;
    ll temp;

    for(ll i = 0; i < numofints; i++){
        cin >> temp;

        list.push_back(temp);

    }
    unordered_map<ll, ll> prefixsummed;
    ll  accu = 0;
    ll counter =0;
    ll diff;
    prefixsummed[0] = 1;

    for(ll i = 0 ;  i < numofints; i ++){
        accu+= list[i];

        diff = accu - target;
        
        if(prefixsummed.count(diff)){
            counter += prefixsummed[diff];
        }
        
        prefixsummed[accu]++;

    }
    cout << counter;
    
}

// /*Nekshavs*/
// #include <iostream>
// #include <iomanip>
// #include <map>
// #include <unordered_map>
// #include <algorithm>
// #include <set>
// #include <unordered_set>
// #include <utility>
// #include <numeric>
// #include <cmath>
// #include <climits>
// #include <random>
// #include <string>
// #include <array>
// #include <vector>
// using  ll =long long;
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     // freopen("breedflip.in", "r" ,stdin);
//     // freopen("breedflip.out", "w" , stdout);
    
//     vector<ll> list;
//     ll numofelms = 0;
//     cin  >> numofelms;
//     ll target = 0;
//     cin >> target;
//     ll temp =0;  

//     for(ll i = 0; i < numofelms; i++){
//         cin >> temp;
//         list.push_back(temp);

//     }
//     ll sumtot = 0;
//     unordered_map<ll, ll> allsusmlist;
//     ll needed = 0;
//     ll resultbucket = 0;
//     allsusmlist[0] = 1;
//     for(ll i =0 ;  i <  numofelms; i ++){
//         sumtot+=list[i];
       
//         needed = sumtot-target;
//         ll locationsubs = allsusmlist.count(needed);

//         if(locationsubs != 0){
//            for(int c= 0;  c < locationsubs; c++){
//             resultbucket++;

//            }

//         } 
//         allsusmlist[sumtot]++;
//     }
//     cout << resultbucket;
    
    
      
// }