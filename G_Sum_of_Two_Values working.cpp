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
/*The heck leson ive learnt from this, in unordered maps and ordered maps, there is a one difference and yuou have to keep it in the mind, the diffferenvce is not about that the noral map dont allow to store duplicates but the ordered map wont, thats WQRONG. both of the maps do nopt add duplicates. the thing that you might be confusing with is multisets. and the thing i want to let you know is that,  the only differnece is the sorting and not sorting, and please do not 
confuse it with the multisets and unordered_multisets, in the multiesets, commonly, they always do keep the duplicates, regardless of the type of the multisets, they always lkeep the duplicate and the defdference betweren two multisert type t=is thgat they have the oosrting or non sorted options and thats all. nothing else., and also, another thing, which is that, in maps., regardles of the nmap type, they dont keep duplicates at all.*/
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll numfoelms;
    ll target;
    cin >> numfoelms >> target;

    vector<pair<ll,ll>> disvect;
    disvect.reserve(numfoelms);

    for(ll count = 0; count < numfoelms; count++){
        ll temp2;
        cin >> temp2;
        disvect.push_back({temp2, count + 1});
    }

    sort(disvect.begin(), disvect.end());

    ll left = 0;
    ll right = numfoelms - 1;

    while(left < right){
        ll sum = disvect[left].first + disvect[right].first;
        if(sum == target){
            cout << disvect[left].second << " " << disvect[right].second << "\n";
            return 0;
        }
        if(sum < target){
            left++;
        }else{
            right--;
        }
    }

    cout << "-1" << "\n";
}