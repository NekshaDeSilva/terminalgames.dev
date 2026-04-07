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


    ll numofn =0;
    ll numofm = 0;
    cin >> numofn >> numofm;
 

    vector<ll> all;
    all.reserve(numofm+numofn);
    vector<ll> nvec;
    nvec.reserve(numofn);
    vector<ll> mvec;
    mvec.reserve(numofm);
    ll tempval = 0;

    for(int i =0 ; i < numofn; i++){
        cin >> tempval;
        nvec.push_back(tempval);
    } 
     for(int i =0 ; i < numofm; i++){
        cin >> tempval;
        mvec.push_back(tempval);
    }     


    for (int i = 0; i < (numofm+numofn); i++)
    {
        if(i >= numofn){
            all.push_back(mvec[i-numofn]);
        }else{
            all.push_back(nvec[i]);
        }
    }
    s(all);
    for( int x =0;  x< all.size(); x++){
        cout << all[x] << " ";
    }
}