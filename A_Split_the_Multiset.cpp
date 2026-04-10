#include <iostream>
#include <iomanip>
#include <string>
#include <numeric>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
#include <set>
#include <utility>
#include <random>
#include <thread>
#include <climits>

using namespace std;
using ll = long long;
using iii = int;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //GO    

    ll t;
    cin >>t;
    for(ll x = 0;  x < t;  x++){
        
    multiset<int> s;
    int temp;
    int initnum = 0;
    int k =0;

    cin >> initnum  >> k;
    initnum = abs(initnum);

    k = abs(k);
    s.insert(initnum);
    //IN MULTISETS, IF YOU NEEDD TO ERASE A SPECIFIC THING, YOU DO THIS:
    /*if you need to delete the entrire srt of numbers of values from it, what you have to do is, > 
     ms.erase(value);
     and  this willdelete allt eh avalues of it.

     if you need to delete the specific elementw which can also be a redundant one too, which means that it can also be aredundant value too.


        auto it = ms.find(element);
        ms.erase(it);
        //this way, it only clears the specific iterator from it.

    */
    auto elemnt =   s.find(initnum);
    s.erase(elemnt);
    int divider = initnum /k;
    for(int i  =0 ;  i < k; i ++){
        s.insert(divider);
    
    }
    cout << divider << '\n';

    }

}