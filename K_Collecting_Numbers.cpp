
#include <iostream>
#include  <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <climits>
#include <utility>
#include <random>
#include <cstdio>
using namespace std;
using ll = long long;
using iii = int;
using ss  = string;
using dd  = double;
#define pb(x) push_back(x)
    #define eb(x) emplace_back(x)
    /*Greedy technique: Index Mapping. this is known as the tedchnique index mapping., nothing else/.*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll numofelms = 0;
    cin >> numofelms;
    vector<ll> list(numofelms+1);
        ll temp;
        

    for(ll i =1 ;  i <= numofelms ; i++){
        cin >>  list[i];
    }
    // vector<ll> orderedlist(list.begin(), list.end());
    // sort(orderedlist.begin(), orderedlist.end());

    ll counter = 0;
    ll counter2 = 0;
 ll numofrounds =1;
   int rounds = 1;
    for (int i = 1; i < numofelms; i++) {
        if (list[i + 1] < list[i]) {
            rounds++;
        }
    }

    cout << rounds << endl;

}   
// #include <iostream>
// #include  <iomanip>
// #include <string>
// #include <vector>
// #include <unordered_map>
// #include <map>
// #include <set>
// #include <unordered_set>
// #include <numeric>
// #include <algorithm>
// #include <cmath>
// #include <climits>
// #include <utility>
// #include <random>
// #include <cstdio>
// using namespace std;
// using ll = long long;
// using iii = int;
// using ss  = string;
// using dd  = double;
// #define pb(x) push_back(x)
//     #define eb(x) emplace_back(x)
//     /*Greedy technique: Index Mapping. this is known as the tedchnique index mapping., nothing else/.*/
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll numofelms = 0;
//     cin >> numofelms;
//     vector<ll> list(numofelms);
//         ll temp;
        

//     for(ll i =0 ;  i < numofelms ; i++){
//         cin >>  list[i];
//     }
//     vector<ll> orderedlist(list.begin(), list.end());
//     sort(orderedlist.begin(), orderedlist.end());

//     ll counter = 0;
//     ll counter2 = 0;
//  ll numofrounds =1;
//     for(;;){
//         if(orderedlist[counter2] == list[counter]  ){
//             if(counter2 >= numofelms-1){
//                 counter2=0;
//                 break;
//             }
//             counter2++;


//         }
//         if(counter < numofelms-1){
//             counter++;

//         }else{
//             counter=0;
//             numofrounds++;

//         }
//     }
//     cout << numofrounds;

// }