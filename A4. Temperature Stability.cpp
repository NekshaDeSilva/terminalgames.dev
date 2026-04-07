#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <random>
/*New one*/
#include <climits>
using ll = long long;
#define s(x) sort((x).begin(), (x).end())
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll numofvals ;
    vector<ll > maxvalues;
    ll max = LLONG_MAX;
     cin >> numofvals;
     vector<ll> list;
    ll tempval=0;

     maxvalues.reserve(numofvals);
     list.reserve(numofvals);
     for(int i =0;  i < numofvals; i++){
        cin >> tempval;
        list.push_back(tempval);
     }
     s(list);

     for(ll i =1 ; i < numofvals;  i++){
        ll diff = list[i] - list[i-1];
        if(diff < max){
            max= diff;
            maxvalues.push_back(max);
        }else{
            maxvalues.push_back(max);
        }
     }
     s(maxvalues);
     ll streak =0;
     vector<ll> maxstreak;
     maxstreak.reserve(numofvals);
     for(ll x= 0; x < maxvalues.size(); x++){
         streak=0;

        for(ll d =x+1;  d < maxvalues.size(); d++){
            if(maxvalues[x] == maxvalues[d]){
                streak++;
               
                
            }

        }
       
        maxstreak.push_back(streak);

     }

     auto& finalmax = *min_element(maxvalues.begin(), maxvalues.end());
     auto& finalstreak  = *max_element(maxstreak.begin(), maxstreak.end());
     cout << finalmax << " " << finalstreak-1;
}