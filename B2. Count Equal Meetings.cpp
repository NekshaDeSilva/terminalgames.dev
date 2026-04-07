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
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<> distr(300,500000);

    vector<ll> firstvec;
    vector<ll> secvec;
    ll n;
    ll m;
    cin >> n >> m;
    ll tempval = 0;

    for(ll i =0 ; i < n ; i++){
    cin >> tempval;
    firstvec.push_back(tempval);

    }

    
    for(ll i =0 ; i < m ; i++){
    cin >> tempval;
    secvec.push_back(tempval);
    
    }

    vector<ll> allvec;
    allvec.reserve(n+m);
    for(ll i= 0; i < (n +m); i++){
        if(i >= n){
            allvec.push_back(secvec[i-n]);

        }else{
            allvec.push_back(firstvec[i]);

        }
    }
    s(allvec);
    ll doubles =0;
    for(ll count = 0;  count < allvec.size(); count++){
            for(ll intercount = count+1; intercount < allvec.size(); intercount++){
                if(allvec[count] == allvec[intercount]){
                    doubles++;
                    allvec[count] = distr(gen);
                    allvec[intercount] = distr(gen);
                }
            }
    }

    cout << doubles;



}