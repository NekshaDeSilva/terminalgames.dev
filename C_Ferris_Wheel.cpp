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
using ll = long long;
using namespace std;
ll  recurse(vector<ll>& weights, ll numofc, ll maxw, vector<pair<ll ,ll>>& ferris){
    int totalbucs= 0;
    // weights.resize( weights.size() +5, 0);

    /*if you need to addd a certain number of elemtns, you can use that above appropach, but if its not the case, where if you think to add or remove elements from the start or to the start, look for the file addremovevector.cpp*/
for(int i =0;  i < numofc; i++){
    if(weights[i] == 0){
        continue;
    }
    if(weights[i] == maxw){

        totalbucs++;
        weights[i] = 0;

    }else{
        auto firstchild = weights.begin() + i;

        auto secchild = upper_bound(weights.begin(), weights.end(), (maxw - weights[i]));
        if(secchild != weights.begin()){
            --secchild;
        }else{
            secchild = weights.end();
        }

        while(secchild != weights.end() && (secchild == firstchild || *secchild == 0)){
            if(secchild == weights.begin()){
                secchild = weights.end();
                break;
            }
            --secchild;
        }

        if(secchild != weights.end() && (*firstchild + *secchild) <= maxw){
            totalbucs++;
    ll loc1 = (firstchild - weights.begin());
            ll loc2 = (secchild - weights.begin());
        
            weights[loc1] =0   ;
            weights[loc2] =0;

        }else if(*firstchild == 0 || secchild == weights.end() || *secchild==0){
            continue;
        }else{

          
        if(*firstchild > maxw || *secchild > maxw){
             ll loc1 = (firstchild - weights.begin());
                     ll loc2 = (secchild - weights.begin());
        
            
            
                if(*firstchild > maxw){
                    weights[loc1] =0   ;
                    totalbucs++;
                }
                if(*secchild > maxw){
                    totalbucs++;
                    weights[loc2] =0;

                }  
                
        }
            
        }

        cout << "-----------\n";
        cout << "first child: " << *firstchild << "\n";
        cout << "second child: " << (secchild == weights.end() ? -1 : *secchild) << "\n";
    }
}   
for(int i =0;  i < numofc;  i++){

}
return  totalbucs;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go

    ll numofc;
    ll maxw;
    cin>> numofc  >> maxw;
    vector<ll> weights;
    weights.reserve(numofc);
    ll temp;
    vector<pair<ll, ll>> ferris;

    for( int i =0;  i <  numofc; i++){
        cin >> temp;
        weights.push_back(temp);

    }

    sort(weights.begin(), weights.end());



    ll val  =     recurse(weights, numofc, maxw, ferris);
    cout << val;

    
}