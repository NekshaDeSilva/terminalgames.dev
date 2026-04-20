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
    vector<char> list;
    ll temp;
    cin >> temp;
    list.resize(temp);  
    ll dividened = temp/26;
    ll  remaining  = temp%26;
    if(remaining != 0 ){
 for(ll i =1; i < (dividened); i++){
        auto pos = list.begin() + (i*26);
        
    
        if(i <= dividened+1){
            iota(pos-26, /*pointer arithmetic*/ pos, 'a');

        }else{
            auto pos1 = pos-25;

            iota(pos1, (pos1+remaining), 'a'  );
            
            break;

        }
    }

    }else if(remaining == 0 && temp > 26){
         for(ll i =1; i < (dividened+2); i++){
             auto pos = list.begin() + (i*26);//this is called the offset. in pointer arithmetic, this is called as the pointer offset, which means that ww can determine the position of the specific value that we eex to look foor by relating themwith the list.beign() or list.end() or a relative valeu that wever previopiuslyt got.

        
            iota(pos-26, /*pointer arithmetic*/ pos, 'a');

        
        }
    }else{
        iota(list.begin(), list.end(), 'a');
    }
   
    for(ll i = 0; i < temp; i++){
        cout << list[i];
    }

}