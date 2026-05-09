#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <utility>
#include <random>
using namespace std;
using ll = long long;
using ss  = string;
using db = double;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll target, numofvals;
    cin >> target >> numofvals;
    vector<pair<ll,ll>> list(numofvals);
    ll temp;

    for(ll i =0;  i < numofvals ; i ++){
        cin >> temp;
        list[i] ={temp, i+1};    
    }
    ll left = 0;
    ll right = numofvals -1;
    ll temp2;
    bool donestate = false;

    for(ll i =0 ; i < numofvals; i++){
        if(left >= right){
            if(donestate!=true){
                cout  << "IMPOSSIBLE";
            }
            break;
        }
        temp2 = list[left].first + list[right].first;
        if(target == temp2){
            cout << list[left].second << " " << list[right].second;
            donestate=true;

            break;
        }else{
            if(target < temp2){
                right--;
            }else if(target > temp2){
                left++;
            }
        }
    }
}
// //two pointers two sum

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cmath>
// #include <climits>
// #include <fstream>
// #include <utility>
// #include <vector>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <cstdio>
// #include <random>
// #include <algorithm>
// #include <numeric>
// using namespace std;
// using ll = long long;
// using ss = string;
// using dbl  = double;
// #define pb(x) push_back(x)
// #define eb(x) emplace_back(x)
// #define sort(x) sort(x.begin(), x.end())

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     //go
//     //in two pointers, unliek that sliding window, where we keeep the original order intact, here, what we are doing really is, what we dfo here is that, we here, we sort this always. why osting?
//     /*why sorting?  we sort this thing up because of a very specii reason/. */
//     ll targetval = 0;
//     cin >> targetval;
//     ll numofvals=  0;
//     cin >> numofvals;

//     vector<pair<ll,ll>> list(numofvals);
//     ll temp2;

//     for(ll i = 0 ; i < numofvals ; i ++){
//         cin >> temp2;
//         list[i] = {temp2, i+1};
//         // sort(x.begin(),x.end(), [](auto a, auto b){
//         //     return a > b;
//         // });

//     }
//     ll left = 0;
//     ll right =numofvals-1;

//     sort(list);
//     ll temp = 0;
//     bool answered_ =false;

//     for(ll i = 0; i < numofvals+1 ; i ++){
//         if(left >= right){//always the left should be leser and if this left part tries to go past the right one or eve the right one tries to go before the left one, i ean even when  right one becaomes smaller, what we have to do is., we must break it at that opalce sregardl;ess or preint imporsisile if answeer isnt ther.e
//             if(answered_){
//                 break;
//             }else{
//                 cout << "IMPOSSIBLE";
//                 break;

//             }
//         }
//         temp = list[left].first+ list[right].first;
//         if(temp  == targetval){
//             answered_=true;

//             cout << list[left].second << " " << list[right].second;
//             break;
//         }
//         else{
//         if(temp > targetval){
//             right--;

            
//         }else if(temp < targetval){
//             left++;
            
//         }
//     }
        
//     }
// }