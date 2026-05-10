/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <climits>
#include <algorithm>
#include <numeric>
#include <random>
#include <utility>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <cstdio>
#include <limits>
//add nl; if needed
using namespace std;
using ll = long long;
using ss = string;
using db = double;
using iii = int;
using ppp = pair<ll, int>;

#define pb(x) push_back(x)
#define eb(x) emplace_back(x)

const int maxn = 300005; 
vector<int> forest[maxn];
ll diffx[maxn];
ll accum[maxn];
int degx[maxn];
bool alivex[maxn];
int mdepth[maxn]; 

vector<int> currp;
vector<int> bestp;
ll maxsumx = numeric_limits<ll>::min() ;

void dfsiz(int nodex, int parx) {
    accum[nodex] = diffx[nodex];
    mdepth[nodex] = 0; // Initialize depth
    
    for (int nxt : forest[nodex]) {
        if (nxt != parx && alivex[nxt]) {
            dfsiz(nxt, nodex);
            accum[nodex] += accum[nxt];
        }
    }
    
    if (accum[nodex] > 0) {


        mdepth[nodex] = -1;
    } else {
        for (int nxt : forest[nodex]) {
            if (nxt != parx && alivex[nxt] && mdepth[nxt] != -1) {
                mdepth[nodex] = max(mdepth[nodex], 1 + mdepth[nxt]);
            }
        }
    }
}

struct cdata {
    ll acc;
    int md;
    int id;
    bool operator<(const cdata& o) const {
        if ((acc > 0) != (o.acc > 0)) return acc > 0;
        if (acc > 0) return acc > o.acc;
        return md < o.md;
    }
};

void dfsgen(int nodex, int parx, bool retx) {
    currp.pb(nodex);
    
    vector<cdata> childx;
    for (int nxt : forest[nodex]) {
        if (nxt != parx && alivex[nxt]){
             childx.push_back({accum[nxt], mdepth[nxt], nxt});
        }
    }
    
    sort(childx.begin(), childx.end());

    for (ll i =0;  i < (int)childx.size(); i ++) {
        
        int nxt = childx[i].id;
        
        bool needretx = retx || (i < (int)childx.size() - 1) || (accum[nxt] > 0);
        
        dfsgen(nxt, nodex, needretx);
        
        if (needretx){


            currp.pb(nodex);
        }
    }
}

pair<vector<int>, vector<ll>> find_rebalancing_strategy(
    int numofvals, vector<int> lista, vector<int> listb, vector<int> listu, vector<int> listv) {
    
    
    for (ll i =0;  i < numofvals; i ++) {
        forest[i].clear();

        alivex[i] = 1;
        degx[i] = 0;
        diffx[i] = (ll)lista[i] - listb[i];
    }
    
    for (ll i =0;  i < numofvals - 1; i ++) {
        forest[listu[i]].pb(listv[i]);
        forest[listv[i]].pb(listu[i]);

        degx[listu[i]]++ ;
        degx[listv[i]]++;
    }

    queue<int> q;
    for (ll i =0;  i < numofvals; i ++) {


        if (degx[i] == 1 && diffx[i] == 0){
             q.push(i);
        }
    }
    ll listbx = 0;
    while (!q.empty()) {
        int temp1 = q.front();
        q.pop();
        alivex[temp1] = 0;
        
        for (int temp2 : forest[temp1]) {
            if (alivex[temp2]) {
                degx[temp2]--;
                
                if (degx[temp2] == 1 && diffx[temp2] == 0){
                     q.push(temp2);
                }
            }
        }
    }

    bestp.clear();
    ///nl
    maxsumx = numeric_limits<ll>::min();
    vector<ll> bfinals;

    for (ll i =0;  i < numofvals; i ++) {


        if (!alivex[i]) continue;
        currp.clear();
        
        dfsiz(i, -1);
        dfsgen(i, -1, 0);
        
        vector<ll> tmpe5(currp.size(), 0);
        vector<ll> whatwehave(lista.begin(), lista.end());
        vector<int> lastx(numofvals, -1);
        
        for (ll j =0;  j < (int)currp.size(); j ++){
             lastx[currp[j]] = j;
        }

        bool is_valid = true;
        ll truckbiek = 0;

        for (ll j =0;  j < (int)currp.size(); j ++) {
            
            int temp4 = currp[j];
            tmpe5[j] -= whatwehave[temp4];
            whatwehave[temp4] = 0;
            
            if (j == lastx[temp4]){
                 tmpe5[j] += listb[temp4];
            }

            truckbiek -= tmpe5[j];
            
            if (truckbiek < 0) {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            ll curaccum = -(ll)currp.size(); 
            
            if (curaccum > maxsumx) {
                maxsumx = curaccum;
                //in here, what you need to understsnfd in a good way is that look here
                bestp = currp;
                bfinals = tmpe5;
            }
        }
    }

    if (bestp.empty()){ 


         return {{0}, {0}};

         
    }

    return {bestp, bfinals};
}