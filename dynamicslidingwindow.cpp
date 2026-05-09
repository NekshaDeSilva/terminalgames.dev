#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <numeric>
#include <utility>
//quicdk note: wheen youre aksked to solve stufd like cintigious substrings, menaing that,m or contiguos arrays inside a vector, what you have to do, its alosot cetainly about starting fom the beginijng and then riunngn until the end id it, meaning that, 
#include <random>
using namespace std;
using ll = long long;
using ss=string;
using db =double;
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define sort(x) sort(x.begin(), x.end())
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    ll target,  numofvals;
    cin >> target >> numofvals;
    vector<ll > list(numofvals);
    for(ll i =0; i < numofvals; i++){
        cin >> list[i];
    }
    ll left = 0;
    ll  right = 0;
    ll sumuntil = 0;
    //the lesson is thyat, how this canbot be O of N queared, the reason is that, in order to a program  to become O of N squarede, we have to do this thing, which is that we must have to check whether the inner loop is actually resetting or not, if the inner loop is actually resettin every single time it runs, then wwe can be gurenteed about it that it is O of N squared which mean that, the inner looop should and really must reset everysignel time in order to it to call as a O of N squared looop. that is the wsole thing to re,nevr , but in this specific program ., what happens is, that it never goes back. it always goaes to fonr.t veen though we aewe rreally using nested loops, we are only going to the front bnand meaning that this isn t reducunt . 
    /*You hit the nail right on the head. That is the golden rule of Big O notation.To get to $O(N^2)$, the inner loop has to do "fresh work" that scales with $N$ almost every time the outer loop moves. If the inner loop resets, you are essentially retracing your steps over and over again.The "Reset" vs. "Remember" ComparisonTypeInner Loop BehaviorComplexityWhy?Nested Loops (e.g., 3SUM)Resets: left = i + 1$O(N^2)$Every time i moves, left starts a brand new journey.Sliding WindowRemembers: left stays put$O(N)$left only moves forward. It never looks back.The "Total Work" LogicThink of it like this: If you have a task that takes 100 steps, and you have two workers (the left and right pointers):In $O(N^2)$: Every time the first worker takes 1 step, the second worker is forced to go back to the starting line and run 100 steps.Total steps: $100 \times 100 = 10,000$.In $O(N)$ (Sliding Window): The first worker (right) walks to the end of the 100 steps. The second worker (left) also walks to the end of the 100 steps, but only moves when necessary.Total steps: $100 + 100 = 200$.*/
    vector<ll> maxvals ;
    if(list.size() == 1 && list[0] <= target){
        cout << list[0];
        return 0 ;

    }else if(list.size() == 1 &&  list[0] >= target){
        cout << "IMPOSSIBLE";
        return 0 ;

    }
    for(ll right  =0; right < numofvals; right++){
        sumuntil+=list[right];
        if(sumuntil > target){
            for(ll x = left; x <= right; x++){
                sumuntil-= list[left];
                left++;
                
                if(sumuntil <= target){
                    break;

                }
            }
            

        }
        if(sumuntil <= target){
             maxvals.push_back(sumuntil);
        }
       

    }
    
    if(maxvals.size() == 0){
        ll  maxval = *max_element(maxvals.begin(), maxvals.end());
        cout << maxval;
    }else{
        cout << "IMPOSSIBLE";
    }
    

}