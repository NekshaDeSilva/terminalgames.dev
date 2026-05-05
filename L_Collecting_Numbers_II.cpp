#include <iostream>
#include  <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <climits>
#include <utility>
#include <random>
#include <cstdio>
using namespace std;
using ll = long long;
using iii = int;
using ss  = string;
using dd  = double;
#define pb(x) push_back(x)
    #define eb(x) emplace_back(x)
    /*Greedy technique: Index Mapping. this is known as the tedchnique index mapping., nothing else/.*/
    /*learnt about the swap() and the memebr fucntion swap, which is m.swap() and they both are really great. heres how to use em. 
        good refernce from Gemini:

        The beauty of std::swap is that it is template-based, meaning it works on almost anything without you needing to worry about pointers or memory addresses yourself.
Here is how it behaves across different data types:
1. For Simple Variables (int, ll, double)
It just swaps the values.
cpp
int x = 5, y = 10;
swap(x, y); // x is 10, y is 5
Use code with caution.
2. For STL Containers (Vectors, Maps, Sets)
If you swap two entire containers, std::swap is smart enough to call that "pointer swap" I mentioned earlier. It doesn't copy all the elements; it just swaps the internal logic. It is very fast (



).
cpp
vector<int> v1 = {1, 2}, v2 = {3, 4};
swap(v1, v2); // Fast pointer swap
Use code with caution.
3. For Elements inside Maps/Sets
This is the tricky part: You cannot swap elements inside a std::set or the keys of a std::map directly.
Why? Sets and Maps are ordered. if you manually swapped two values, you would break the internal tree structure (the sorting).
What happens? If you try swap(*my_set.begin(), *my_set.rbegin()), the compiler will throw an error because those values are const.
4. Do you need pointers or addresses?
No. In C++, std::swap uses references (T& a, T& b).
When you pass list[i], you are passing a reference to that memory location.
The function handles the "under the hood" work. You don't need to use & or *.
To answer your specific concern for this problem:
Since you are swapping elements in a vector, swap(list[a], list[b]) is exactly what you need. It modifies the vector directly and permanently because it operates on the actual memory references of those slots.
    */
    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll numofvals = 0;
    ll  numofswaps = 0;

    cin >> numofvals >> numofswaps;
    vector<ll> list;
    list.resize(numofvals);

    for(ll i  =0 ;i <numofvals;  i++ ){
        cin >> list[i];    
    }
    vector<pair<ll , ll>> ingd;    
    pair<ll, ll> temp2;

    for(ll i =0 ;  i < numofswaps;i ++){
        cin >> temp2.first  >> temp2.second;

        ingd.push_back(temp2);

    }

   vector<ll> listcopy;
   listcopy.resize(numofvals+1);
   ll counter1= 0 ;

   for(auto x: list){
    listcopy[x] = counter1;
    counter1++;
   }
   
   ll numofrounds = 1;
   for(ll i =  1;i< numofvals; i++){
    if(listcopy[i] > listcopy[i+1]){
        numofrounds++;
    }
   }

    for(ll e =0;  e < numofswaps;e++){

        ll temp4 = ingd[e].first;
        ll temp5 = ingd[e].second;

        auto loc1= temp4 - 1;
        auto loc2= temp5 - 1;
        
        ll v1 = list[loc1];
        ll v2 = list[loc2];

        set<pair<ll, ll>> gotpairs;
        if(v1 > 1) gotpairs.insert({v1 - 1, v1});
        if(v1 < numofvals) gotpairs.insert({v1, v1 + 1});
        if(v2 > 1) gotpairs.insert({v2 - 1, v2});
        if(v2 < numofvals) gotpairs.insert({v2, v2 + 1});
        
 
        for(pair<ll, ll> p : gotpairs) {
            if(listcopy[p.first] > listcopy[p.second]) {
                numofrounds--;
            }
        }

       
        swap(list[loc1], list[loc2]);
        listcopy[v1] = loc2;
        listcopy[v2] = loc1;

        for(pair<ll, ll> p : gotpairs) {
            if(listcopy[p.first] > listcopy[p.second]) {
                numofrounds++;
            }
        }

        cout << numofrounds << "\n";
    }
}
