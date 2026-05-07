#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <fstream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>
#include <numeric>
#include <string>
#include <utility>
#include <random>
#include <chrono>
using namespace std;
using ll = long long;
using ss= string;
using dd = double;
#define sort(x) sort(x.begin(), x.end())
#define pb(x) push_back(x)
// this is the sliding window problem type static sliding window. this asks us to calc the sum of the specific window sized area. meansing that the maximum sum that frame can everr hold. the frame or the winsdow capacityy is given as 3 and in that case, this wondow slids and moves but it catches exactly 3 elemebts each time, and we just add the next element androve the first element we took in that last iteration's fist element. thats it. and then we compatre it to the maxcurrent, if greater, now its the maxcurrent, otherwise, its not. discarded. 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll numofsongs;
    cin >> numofsongs;
    vector<ll > list(numofsongs);
    for(ll i  = 0 ; i < numofsongs; i ++){
        cin >> list[i];

    }
    if(list.size() < 3){
        cout << "IMPOSSIBLE";
        return 0;
        }

    ll currentsum =0;

    ll maxm = 0;
    for(ll i = 0 ; i < 3; i++){
        currentsum+=list[i];

    }
    maxm = currentsum;
    for(ll i = 3; i < numofsongs; i ++){
        currentsum+=list[i];
        currentsum-=list[i-3];
        if(currentsum>maxm){
            maxm=currentsum;

        }
    }
    cout << maxm;

}


//In fixed widnow problems, they always give us a specific contatnt or a variable with a dynamic proerty that says that this s the length that the window actually is and you should consider in that length. 
//this is often given as cinsecutive, contigous, etc. 
