    #include <iostream>
    #include <iomanip>
    #include <cmath>
    #include <iterator>
    #include <vector>
    #include <string>
    #include <climits>
    #include <map>
    #include <set>
    #include <unordered_set>
    #include <numeric>
    #include <unordered_map>
    #include <algorithm>
    #include <random>

    using namespace std;
    using ll = long long;

    int main(){
    multiset<ll> list;
    generate_n(inserter(list, list.end()), 133 [counter = 0]()mutable{
        return counter++;
    });
    //keep this in your mind because this is extremely important.
    auto n = list.find(23);
    if(n != list.end()){
    
    cout << *(n) << endl;
    
    
    }
    

} 