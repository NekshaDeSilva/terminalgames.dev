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
    if(weights[i] == maxw){

        totalbucs++;

    }else{
        auto firstchild = lower_bound(weights.begin(), weights.end(), weights[i]);

        auto secchild = lower_bound(weights.rbegin(), weights.rend(), (maxw - weights[i]));
        if((*firstchild + *secchild) <= maxw){
            totalbucs++;
    ll loc1 = (firstchild - weights.begin());
            ll loc2 = (weights.rend()- secchild) -1;
        
            weights[loc1] =0   ;
            weights[loc2] =0;

        }else if(*firstchild == 0 || *secchild==0){
            continue;
        }else{

          
        if(*firstchild > maxw || *secchild > maxw){
             ll loc1 = (firstchild - weights.begin());
           ll loc2 = (weights.rend()- secchild) -1;
        
            
            
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
        cout << "second child: " << *secchild << "\n";
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

    sort(weights.rbegin(), weights.rend());



    ll val  =     recurse(weights, numofc, maxw, ferris);
    cout << val;

    
}