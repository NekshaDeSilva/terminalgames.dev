/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>
#include <random>
#include <string>
#include <array>
#include <vector>
using  ll =long long;
using namespace std;
/**
 * @brief Problems in this `main` (without changing code):
 *
 * 1) Iterator/member-access conflict (`x.first`, `x.second`)
 *    - In `for (auto x = list.begin(); x != list.end(); x++)`, `x` is a `std::map<...>::iterator`,
 *      not a `std::pair`.
 *    - Therefore `x.first` / `x.second` are invalid.
 *    - For iterators, use `x->first` / `x->second` (or `(*x).first` / `(*x).second`).
 *
 * 2) Why this is "not dereferencing" the way you expect
 *    - `*x.first` is parsed as `*(x.first)`, not as `(*x).first`.
 *    - Since `x.first` is invalid for an iterator, this fails before dereference logic even makes sense.
 *    - Same issue for `*x.second`.
 *
 * 3) Type conflict in `cands.push_back(*x.second)`
 *    - `cands` stores `std::string`.
 *    - If you had a pair and wrote `*something.second` where `second` is `std::string`,
 *      that dereference would produce a `char`, not a `std::string`.
 *    - So this expression conflicts with `vector<string>::push_back`.
 *
 * 4) Logical conflict in comparison
 *    - `if(*x.first == *(x).first)` compares the same "current" key expression to itself
 *      (and both forms are also syntactically wrong for an iterator).
 *    - There is no previous/next element involved here, so this does not detect duplicates/transitions.
 *
 * 5) Container semantics conflict with intended logic
 *    - `std::map<ll, string>` keeps unique keys (`tempscore`), so repeated equal scores are not stored
 *      as separate entries with `emplace`.
 *    - If multiple cows can share the same score, this structure drops data and breaks tie/second-place logic.
 *
 * 6) Comment mismatch
 *    - The note mentions `std::list`, but the code uses `std::map`.
 *    - Both have non-random-access iterators, so `+ 1` is invalid, but the container name in the comment is incorrect.
 */
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("notlast.in" , "r" , stdin);
    freopen("notlast.out", "w", stdout);
    
    ll numofcows = 0;
    cin >> numofcows;
    map<string, ll/*no need to add greater<ll>*/> prelist;
    ll tempscore;
    string tempname;

    prelist["Bessie"] = 0;
    prelist["Elsie"] = 0;
    prelist["Daisy"] = 0;
    prelist["Gertie"] = 0;
    prelist["Annabelle"] = 0;
    prelist["Maggie"] = 0;
    prelist["Henrietta"] = 0;

    for(ll i =0; i < numofcows; i ++){
        cin >> tempname >> tempscore;
        prelist[tempname] += tempscore;
    }
    multiset<pair<ll, string>> list;
    for(auto [x,y] : prelist){
        list.emplace(y,x);
    }
    /**
     * @brief `list.begin() + 1` fails because `std::list` iterators are **bidirectional**, not random-access.
     *
     * @details
     * Pointer-style arithmetic (`+ 1`) only works on random-access iterators (e.g., from `std::vector`, `std::array`, `std::deque`).
     * For `std::list`, the iterator cannot jump by offset with `+`; it must be advanced step-by-step.
     *
     * @note
     * The problem is not with `auto key` itself—the issue is the iterator operation used to reach the second element.
     */
    ll counter =0;
    vector<string> cands;
    cands.reserve(numofcows);

        for(auto x = list.begin(); x != list.end(); x++){
            if(counter ==1){

                cands.push_back((*x).second);
                
                
            }
            if( (next(x)) != list.end() && (*x).first == (*(next(x))).first){
                continue;
            }
            counter++;

        }
    if(cands.size() == 1){
        cout << cands[0] << "\n";

    }else{
        cout << "Tie\n";
    }
   

    


}