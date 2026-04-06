#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
using ll = long long ;
using namespace std;

ll print(vector<int>& current, ll applicantsn){
        ll tempval =0;
    for(int  i =0 ; i < applicantsn; i++){
        // FIX: Use `current[i]` (status vector) instead of `applicantsn[i]`.
        // Reason: `applicantsn` is a single number (`ll`), not an indexable array/vector.
        if(current[i] == 1){
            tempval++;

        }
    }

    return tempval;
}
bool checkitfinished(vector<int>& current, ll applicantsn){
    // FIX: Parameter type is `vector<int>&` to match the actual `current` argument.
    // Reason: previous mismatch (`vector<ll>&`) caused reference binding/type errors.
    ll tempval =0;
    for(ll  i =0 ; i < applicantsn; i++){
        // FIX: Same indexing correction as above.
        // Reason: only `current` is indexable; `applicantsn` is a scalar count.
        if(current[i] == 1){
            tempval++;

        }
    }
    if(tempval == applicantsn){
        return true;

    }else{
        return false;
    }
}
/*ll recurse(ll& applicantsn, ll& apartmentsn, ll& diffn, vector<ll> desired, vector<ll> reality, vector<int>& current){
    
    if(checkitfinished(current, applicantsn)){

        return print(current, applicantsn);
    }
    
    for(ll i =0 ; i < applicantsn; i++){
        ll nego1 = reality[i] - diffn;
        ll nego2 = reality[i] + diffn;
        if(current[i] == 1){
            continue;

        }
        if(nego1 <= desired[i] <= nego2 ){
            current[i]=1;
        }

        recurse(applicantsn, apartmentsn, diffn, desired, reality, current);
       
    }*/
ll recurse(ll& applicantsn, ll& apartmentsn, ll& diffn, vector<ll>& desired, vector<ll>& reality, vector<int>& current, ll ai, ll ri){
    if(ai >= applicantsn || ri >= apartmentsn){
        return 0;
    }

    ll low = desired[ai] - diffn;
    ll high = desired[ai] + diffn;

    if(reality[ri] < low){
        return recurse(applicantsn, apartmentsn, diffn, desired, reality, current, ai, ri + 1);
    }
    if(reality[ri] > high){
        return recurse(applicantsn, apartmentsn, diffn, desired, reality, current, ai + 1, ri);
    }

    current[ai] = 1;
    return 1 + recurse(applicantsn, apartmentsn, diffn, desired, reality, current, ai + 1, ri + 1);
}

ll recurse(ll& applicantsn, ll& apartmentsn, ll& diffn, vector<ll>& desired, vector<ll>& reality, vector<int>& current){
    sort(desired.begin(), desired.end());
    sort(reality.begin(), reality.end());
    return recurse(applicantsn, apartmentsn, diffn, desired, reality, current, 0, 0);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
//go
    ll applicantsn, apartmentsn, diffn;
    cin >> applicantsn >> apartmentsn >>diffn;
    vector<ll > desired;
    desired.reserve(applicantsn);

    vector<ll> reality;
    reality.reserve(apartmentsn);
    ll tempval;

    for(ll i = 0 ; i < applicantsn; i++){
        cin >> tempval;
        desired.push_back(tempval);

    }
    
    for(ll i = 0 ; i < apartmentsn; i++){
        cin >> tempval;
        reality.push_back(tempval);

    }

    //go

    vector<int> current(applicantsn, 0);
    current.reserve(1000);
    ll value = recurse(applicantsn, apartmentsn, diffn, desired, reality,current);
    cout << value;

}