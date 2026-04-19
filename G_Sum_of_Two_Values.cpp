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
    //go

    ll numfoelms;
    ll target;
    cin >> numfoelms >> target;
    unordered_multiset<ll> list;
    unordered_map<ll, pair<ll,ll>> positions;
    positions.reserve(numfoelms * 2);
    ll temp2;
    unordered_multiset<ll> disvect;
    disvect.reserve(numfoelms);

    for(ll count  =0;  count < numfoelms; count++){
        cin >> temp2;
        disvect.emplace(temp2);
        list.emplace(temp2); //we can also use list.insert() or just list[];

        auto itPos = positions.find(temp2);
        if(itPos == positions.end()){
            positions[temp2] = {count + 1, -1};
        }else if(itPos->second.second == -1){
            itPos->second.second = count + 1;
        }


    }
    ll diff =0;
    bool found = false;
    ll diffabs;
    for(auto i = list.begin(); i != list.end(); i++){
        diff = target - (*i);
        auto rest = list.find(diff);
        diffabs = (*i);
        ll diff2 = 0;
        if(rest != list.end()){
            diff2 = (*rest);
        }else{
            diff2 = pow(target, 2);
        }
        
           ll distance1= 0;
           ll distance2 = 0;
        //  cout << (i- list.begin()) << "\n"; POINT IT OUT: THIS ONE IS CRITICAL AND READ THIS, THIS IS NOPT CORRCTR BECAUSE OF A REASON THAT IN MAPS, THE KEYS ARE NOT ASSIGNED IN A INCREMENTAL WAY, MEANING THAT THEY DO NOT BAHAVE LIKE THE FIRTS POINTER 1, 2,3,4,5,6,, << THAT IS NOT HOW THEY STORE THE VALUES. INSTEAD, HOW IT STORES THE VALUES ARE A BIG TOPIC WHICH NEEDSA CAREFIUL CONSIDERATION. which means that, if you need to gt the distance from the bginning onwards, this methodd wont be able to use because its not in sequuential order like vectors or multisets or sets, this patten is also seen in unordered multisets and unoprdered sets and unordered maps.
                         ll value1 = (*i);

                     if(( diffabs+ diff2 ) == target && rest != list.end()){
                         ll value2 = (*rest);

                         if(value1 == value2){
                                if(positions[value1].second == -1){
                                        continue; 
                                }
                                distance1 = positions[value1].first;
                                distance2 = positions[value1].second;
                         }else{
                                distance1 = positions[value1].first;
                                distance2 = positions[value2].first;
                         }
        
            cout << distance2  <<  " " << distance1 << "\n";
            found = true;
            break;



        }


    }

    if(!found){
        cout << "IMPOSSIBLE" << "\n";
    }
}