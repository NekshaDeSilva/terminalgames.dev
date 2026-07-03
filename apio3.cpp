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
bool alivex [maxn];

vector<int> currp;
vector<ll> sumtemp(1000000, 0);


vector<int> bestp 
;
ll maxsumx = -1; 

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
    
    sort(childx.rbegin(), childx.rend());

    for (ll i =0;  i < (int)childx.size(); i ++) {
        
        int nxt = childx[i].second;
        bool needretx = retx || (i < (int)childx.size() - 1);
        
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

        // diffx[i] = (ll)lista[i]- listb[i];
        alivex[i] = 1;
        degx[i] = 0; 
        //degx[i] = 2;
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

    while (!q.empty()) {
        int temp1 = q.front();
        q.pop();
        alivex[temp1]=   0;
        
        for (int temp2 : forest[temp1]) {
            if (alivex[temp2]) {
                degx[temp2]  --;
                
                if (degx[temp2] == 1 && diffx[temp2] == 0){
                     q.push(temp2);
                }
            }
        }
    }

    bestp.clear();
    maxsumx = 0;

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
    vector<int> lastx(numofvals,-1);
    
    
    for (ll i =0;  i < (int)bestp.size(); i ++){

        
         lastx[bestp[i]] = i;
    }

    for (ll i =0;  i < (int)bestp.size(); i ++) {
        
        int temp4 = bestp[i];
        fianls[i] -=whatwehave[temp4];
        whatwehave[temp4] = 0;
        
        if (i == lastx[temp4]){
             fianls[i] +=listb[temp4];
        }
    }

    return {bestp, fianls};

}    