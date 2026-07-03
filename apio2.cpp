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
#include <deque>

using namespace std;
using ll = long long;
using ss = string;
using db = double;
using iii = int;
using ppp =pair<int, int>;

#define pb(x) emplace_back(x)
#define eb(x) emplace_back(x)
#define ss sort((x).begin(),  (x).end()) 

const int maxn = 200005;
vector<int> forest[maxn];
ll diffx[maxn];
ll accum[maxn];
int degx[maxn];
bool alivex[maxn];

vector<int> currp;
vector<int> bestp;
ll maxsumx = -1e18 ;

void dfsiz(int nodex, int parx) {
    accum[nodex] = diffx[nodex];
    for (int nxt : forest[nodex]) {
        
        if (nxt != parx && alivex[nxt]) {
            dfsiz(nxt, nodex);
            accum[nodex] += accum[nxt];
        }
    }
}

void dfsgen(int nodex, int parx, bool retx) {
    currp.pb(nodex);
    
    vector<ppp> childx;
    for (int nxt : forest[nodex]) {
        if (nxt != parx && alivex[nxt]){
             childx.push_back({accum[nxt], nxt});
        }
    }
    

    for (ll i =0;  i < (int)childx.size(); i ++) {
        
        int nxt = childx[i].second;
        dfsgen(nxt, nodex, true);
        
        currp.pb(nodex);
    }
}

pair<vector<int>, vector<ll>> find_rebalancing_strategy(
    int numofvals, vector<int> lista, vector<int> listb, vector<int> listu, vector<int> listv) {
 
    
    for (ll i =0;  i < numofvals; i ++) {
        forest[i].clear();
        
        // diffx[i] = (ll)lista[i]- listb[i];
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

  
    bool changed = true;
    while(changed) {
        changed = false;
        for(ll i=0; i<numofvals; i++) {
            if(alivex[i] && degx[i] == 1 && diffx[i] == 0) {
                alivex[i] = 0;
                changed = true;
                for(int nxt: forest[i]) degx[nxt]--;
            }
        }
    }

    bestp.clear();
    maxsumx = -1e18;

    for (ll i =0;  i < numofvals; i ++) {
        if (!alivex[i]) continue;
        currp.clear();
        
        dfsiz(i, -1);
        dfsgen(i, -1, 0);
        
        ll curaccum = 0;
        for (int temp3 : currp){
             curaccum += diffx[temp3];
        }
        
        if (curaccum > maxsumx) {
            maxsumx = curaccum;
            //in here, what you need to understsnfd in a good way is that look here
            bestp = currp;
        }
    }

    if (bestp.empty()){
         return {{0}, {0}};
    }

    vector<ll> fianls(bestp.size(), 0);
    vector<ll> whatwehave(lista.begin(), lista.end());
    vector<int> lastx(numofvals, -1);
    
    for (ll i =0;  i < (int)bestp.size(); i ++){
         lastx[bestp[i]] = i;
    }

    for (ll i =0;  i < (int)bestp.size(); i ++) {
        
        int temp4 = bestp[i];
        fianls[i] -= whatwehave[temp4];
       
        
        if (i == lastx[temp4]){
             fianls[i] += listb[temp4];
        }
    }

    return {bestp, fianls};
}