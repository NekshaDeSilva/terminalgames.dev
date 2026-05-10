#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <numeric>
#include <cstring>
#include <random>
#include <utility>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <climits>
using namespace std;
using ll = long long;
using ss= string;
using db = double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    ll  numofvala, target;
    cin >> numofvala >> target;
    ll temppair;
    vector<pair<ll, ll >> list;
    list.resize(numofvala);
    for(ll i = 0; i < numofvala; i++){
        cin >> temppair;
        list[i] = {temppair, i+1};
    }
    std::sort(list.begin(), list.end());

    bool found = false;
    for(ll i = 0; i < numofvala && !found; i++){
        pair<ll, ll> firatindex = list[i];
        ll  newtarget = target - firatindex.first;
        ll left = i + 1;
        ll right = numofvala - 1;
        while(left < right){
            ll currentsum = list[left].first + list[right].first;
            if(currentsum == newtarget){
                cout << firatindex.second << " " << list[left].second << " " << list[right].second;
                found = true;
                break;
            }
            if(currentsum < newtarget){
                left++;
            }else{
                right--;
            }
        }
    }
    if(!found){
        cout << "IMPOSSIBLE";
    }
 }