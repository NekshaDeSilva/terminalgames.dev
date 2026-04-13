#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <climits>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
#include <set>
#include <unordered_set>/*this is forgetful*/
#include <utility>
#include <random>
#include <numeric>
/*the new libes that are needed*/
#include <map>
#include <unordered_map>

using namespace std;
using ll = long long ;
using iii = int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> details;
    cout << "when you need to insetr valus into a map,  you have few options and the best option is to use the normal brackett method. in this waty, even if a elemnt does n not exist in thatr specific place, you will be able to insert that value as a news values and then do so. ";
    details["something"] = 29049824;
    cout << "\n" <<  details["something"]; //this prints oput like smooth butter.
    
}