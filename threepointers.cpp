#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <random>
#include <cstdio>
#include <utility>
using namespace std;
using ll = long long;
using ss =string;
using db =double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define sort(x) sort(x.begin(), x.end());
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    ll target, numofvals;
    cin >> target >> numofvals;
    vector<pair<ll, ll >> list(numofvals);
    ll temp;
    for(ll i = 0; i < numofvals;i++){
        cin >> temp;
        list[i] = {temp, i+1};
    }
    sort(list);
    for(ll x =0;  x <  numofvals; x ++){
        ll top = list[x].first;
        ll left  = 0;
        bool othertwofound = false;

        ll temp2;
        pair<ll, ll> othertwo;
        ll right = numofvals-1;
        
        
        for(ll i= 0; i < numofvals; i++){
        if(left == x ){
            left++;
        }else if(right ==x ){
            right--;
        }
            temp2 = list[left].first + list[right].first;
            if(right <= left){
               
                break;
            }
            if((target-top) == temp2){
            othertwo.first = list[left].second ;
            othertwo.second =list[right].second;
               cout << list[x].second  << " " << othertwo.first << " " << othertwo.second << "\n"; 
               othertwofound  = true;
            //    break; if we place this break here., then anything happening afterwards wont be done, which mean that everything happening afterwards will be seized. 
                return 0 ;
            
           
        
            }else{
                if((target-top) > temp2){
                left++;

            }else if((target-top) < temp2){
                right--;

            }
            }
            


        }
         if(othertwofound == false && x >= numofvals-1){
                    cout << "IMPOSSIBLE";
                    return 0;
                }else{
                 

                }
        
        
    }

}