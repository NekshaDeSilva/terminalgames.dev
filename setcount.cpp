#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>

using namespace std;
using ll = long long;
int main(){
    multiset<string> list = {"abs", "abc" ,"abv", "abf", "abc"};
    auto  number  = list.count("abc");
    cout << number;  // this will print out 2 because multiset allwows dulpicsate elements. but in cases such as wehre you might need to use the set, it will trim the duplicates and then you will always get 1. and this fuctiuon or the method is discovered  now.

}
