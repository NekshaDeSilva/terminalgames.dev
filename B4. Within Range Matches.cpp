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


 ll ntarget, nresource, nk;
 cin >> ntarget >> nresource >> nk;
     uniform_int_distribution<> distr(300*ntarget,5000*nresource);
    vector<ll> target;
    vector<ll> resource;
    ll tempval;
    
    for(int i =0;  i < ntarget; i++){
        cin >> tempval;
        target.push_back(tempval);
        
    }
    for(int i =0;  i < nresource; i++){
        cin >> tempval;
        resource.push_back(tempval);

    }   
    ll countx = 1;
    if(target.size() !=  resource.size()){
        if(target.size() > resource.size()){/*New method*/
            resource.resize(target.size(),distr(gen));
        }else if (target.size() < resource.size()){
             target.resize(resource.size(),distr(gen));
        }
    }
    s(target);
    s(resource);


    for(ll i  =0 ; i < target.size(); i++){
        for(ll v =(i+1);  v < target.size(); v++){
            if(abs(target[i]- resource[v]) <= nk){
                countx++;
                target[i] = distr(gen);
                resource[v]  =distr(gen);
                continue;
            }else{
                //goshead
            }
        }
    }
    cout << countx;

    
}
