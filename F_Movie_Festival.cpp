#include <iostream>
#include <iomanip>
#include <string>
#include <numeric>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>
#include <random>
#include <thread>
#include <climits>
#include <unordered_set>

using namespace std;
using ll = long long;
using iii = int;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO        
    ll numofc;
    cin >> numofc;
    vector<ll> listof0;

    vector<pair<ll, ll>> times;
    times.reserve(numofc);
    ll temp1, temp2;
    vector<ll> maxcelemtemp;
    maxcelemtemp.reserve(1e9);
    for(int i =0; i < numofc; i++){
        cin >> temp1 >> temp2;
        times.emplace_back(temp1 , temp2);
        maxcelemtemp.push_back(temp2);

    }
    auto maxofallsec = max_element(maxcelemtemp.begin(), maxcelemtemp.end());
    listof0.reserve(*maxofallsec);
    listof0.resize(*maxofallsec, 0);
    sort(listof0.begin(), listof0.end());
    for(int i =0 ; i < numofc; i ++){
        for(int  x =(times[i].first-1);  x < (times[i].second); x++){
            listof0[x] +=1;

        }
    }
    
    auto it = *max_element(listof0.begin(), listof0.end());
    cout << it;
}