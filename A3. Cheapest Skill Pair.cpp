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
    int numofstuds;
    ll maxelm = LLONG_MAX;
    cin >> numofstuds;
    vector<int> list;
    int tempval;
    for(int i = 0;  i < numofstuds; i++){
        cin >> tempval;
        list.push_back(tempval);

    }
    s(list);
    ll firtelm = 0;
    ll secelm = 0;

    for(int i =1 ; i < numofstuds; i ++){//Why we take 1 as the i, that is bevcuase we do have the full control over the i. so it becoems much more easier to control it and avoid out of bounds errors that we do usually see aftweer then
        
        ll diff = list[i] - list[i-1];
        if(diff < maxelm){
            maxelm = diff;
        secelm = list[i];
        firtelm = list[i-1];
       
        }
        
    }    
    cout << abs(maxelm) <<  " " << firtelm << " " << secelm << "\n";

}