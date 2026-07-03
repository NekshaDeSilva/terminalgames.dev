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

using namespace std;
using ll = long long;
using ss = string;
using db = double;
using iii = int;
using ppp = pair<ll, int>;

#define pb(x) push_back(x)
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
ll maxsumx = 0 ; 

void dfsgen(int nodex, int parx) {
    currp.pb(nodex);
    accum[nodex] = diffx[nodex];
    
    for (int nxt : forest[nodex]) {
        if (nxt != parx && alivex[nxt]){
            dfsgen(nxt, nodex);
            accum[nodex] +=  accum[nxt] ;
             currp.pb(nodex); 
        }
    }
}

pair<vector<int>, vector<ll>> find_rebalancing_strategy(
    int numofvals, vector<int> lista, vector<int> listb, vector<int> listu, vector<int> listv) {
    
    for (ll i =0;  i < numofvals; i ++) {
    


        // diffx[i] = (ll)lista[i]- listb[i];
        alivex[i] = 1;
        degx[i] = 0;
        diffx[i] = (ll)lista[i]   - listb[i];
    }
    
    for (ll i =0;  i < numofvals - 1; i ++) {
        forest[listu[i]].pb(listv[i]);
        forest[listv[i]].pb(listu[i]);
    }

    bestp.clear();
    maxsumx = 0;

    for (ll i =0;  i < numofvals; i ++) {
        currp.clear();
        
        dfsgen(i,-1);
        
        ll curaccum = 0;
        for (int temp3 : currp){
             curaccum += diffx[temp3];
        }
        
        if (curaccum > maxsumx) {
            maxsumx = curaccum;
            //in here, what you need to understsnfd in a good way is that look here
            bestp=currp;
        }
    }

    vector<ll> fianls(bestp.size(), 0);

    vector<ll> whatwehave(lista.begin() , lista.end()  );
    
    for (ll i =0;  i <(int)bestp.size(); i  ++) {
        int temp4 = bestp[i];
        fianls[i]-=whatwehave[temp4];
       
    }

    return {bestp, fianls} ;
}